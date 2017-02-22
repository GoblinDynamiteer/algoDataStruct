#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
  #include <windows.h>

  double mclocks() {
	  LARGE_INTEGER itim;
	  QueryPerformanceCounter(&itim);
      return itim.QuadPart/5000.0;
  }
#else
  double mclocks() {
	  return (double)clock();
  }
#endif

#include "sort.h"

void usage() {
   printf("Usage: main /statistics_file/\n");
}
typedef struct _sort_handle_S {
   char *algorithm_name;
   double statistics[10];
   void (*function)(int *, int);
} sort_handle;

#define ZERO_STAT {0,0,0,0,0, 0,0,0,0,0}

#define NUM_ALGORITHMS 5

sort_handle algorithms[NUM_ALGORITHMS] = {
  {"Bubblesort", ZERO_STAT, bubble_sort},
  {"Insertion sort", ZERO_STAT, insert_sort},
  {"Quicksort", ZERO_STAT, quick_sort},
  {"Selection sort", ZERO_STAT, select_sort},
  {"Shell sort", ZERO_STAT, shell_sort}
};

void print_array(int *array, int size) {
   int ix;
   for(ix = 0; ix < 20; ix++)
      printf("%d ", array[ix]);
   printf("\n");
}

int check_if_sorted(int *array, int size) {
   int ix;
   for(ix = 0; ix < size-1; ix++) {
      if(array[ix] > array[ix+1]) return 0;
   }
   return 1;
}

void table_line(FILE *statF) {
   int alg;
   fprintf(statF, "-----");
   for(alg = 0; alg < NUM_ALGORITHMS; alg++)
      fprintf(statF, "----------------");
   fprintf(statF, "\n");
}

void compute_statistics(FILE *statF, int size, double scale) {
   int alg, ix, num, sample;
   const int num_samples = 50;
   int array[10000];
   double t0, t1, T;
   void (*sort)(int *, int);

   srand(clock());
   for(alg = 0; alg < NUM_ALGORITHMS; alg++) {
      printf("%s:\n", algorithms[alg].algorithm_name);
      for(num = size; num < size*10; num+=size) {
         algorithms[alg].statistics[num/size] = 0;
         printf("  %d ", num);
         for(sample = 0; sample < num_samples; sample++) {
            for(ix = 0; ix < num; ix++) {
               array[ix] = rand()%100;
            }
            sort = algorithms[alg].function;
            t0 = mclocks();
            sort(array, num);
            t1 = mclocks();
            if(!check_if_sorted(array, num)) {
               printf("\nERROR: algorithm %s doesn't sort the array ",
                     algorithms[alg].algorithm_name);
               print_array(array, num);
            }
            T = t1-t0;
			if(T == 0.00) {
				printf("WARNING: zero time interval detected\n");
			}
            algorithms[alg].statistics[num/size] += T;
            printf("+"); fflush(stdout);
         }
         printf("\n");
      }
   }

   table_line(statF);
   fprintf(statF, "  num");
   for(alg = 0; alg < NUM_ALGORITHMS; alg++)
      fprintf(statF, "%16s", algorithms[alg].algorithm_name);
   fprintf(statF, "\n");
   table_line(statF);
   for(ix = 1; ix < 10; ix++) {
      fprintf(statF, " %4d", ix*size);
      for(alg = 0; alg < NUM_ALGORITHMS; alg++) {
        fprintf(statF, "       % 9.2f", scale*algorithms[alg].statistics[ix]/CLOCKS_PER_SEC/num_samples);
      }
      fprintf(statF, "\n");
   }
   table_line(statF);
}

int main(int argc, char **argv) {
   FILE *statF;
   if(argc<2) {
      usage();
      return -1;
   }
   statF = fopen(argv[1], "wt");
   compute_statistics(statF, 1, 1e6);
   compute_statistics(statF, 10, 1e6);
   compute_statistics(statF, 100, 1e6);
   compute_statistics(statF, 1000, 1e3);
   fclose(statF);
   return 0;
}
