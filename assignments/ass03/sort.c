#include "sort.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int check_if_sorted(int *array, int size);

void _swap(int *n1, int *n2) {
   int temp = *n1;
   *n1 = *n2;
   *n2 = temp;
}

void bubble_sort(int *array, int size) {
   int ix, jx;
   for(ix = 0; ix < size-1; ix++) {
      for(jx = ix+1; jx < size; jx++) {
         if(array[ix]>array[jx]) {
            _swap(&array[ix], &array[jx]);
         }
      }
   }
}

/* OBS TA BORT  */
void dylan_sort(int *array, int size){
  srand(time(NULL));
  //printf("\nSorting array of size: %d\n", size);
  unsigned long long tries = 0ull;
  while(!check_if_sorted(array, size)){
    if(tries % (50000 * size) == 0){
      //printf("#");
    }
    _swap(&array[rand() % size], &array[rand() % size]);
    //tries++;
  }
  //printf("\nSorted your array! ;D\n");
  //printf("Took %llu tries, cake!\nThanks for using DylSort TM\n", tries);
}

void select_sort(int *array, int size) {
   int ix, jx;
   for(ix = 0; ix < size-1; ix++) {
      int minx = ix;
      for(jx = ix+1; jx < size; jx++) {
         if(array[jx]<array[minx]) {
            minx = jx;
         }
      }
      _swap(&array[ix], &array[minx]);
   }
}

/*  Byggd efter pseudokod på insertion sorts wikipedia-sida */
void insert_sort(int *array, int size){
	int ix, jx;
	for(ix = 0; ix < size; ix++){
		jx = ix;
		while(jx && (array[jx-1] > array[jx])){
			_swap(&array[jx], &array[jx-1]);
			jx--;
		}
	}
}

/*  Byggd efter kod på
  https://cprogrammingcodes.blogspot.se/2012/02/shell-sorting.html */
void shell_sort(int *array, int size){
  int ix, jx, kx;
  for(ix = size/2; ix > 0; ix /= 2){
    for(jx = ix; jx < size; jx++){
      for(kx = jx - ix; kx >= 0; kx = kx - ix){
        if(array[kx+ix] >= array[kx]){
          break;
        }
        else
        {
          _swap(&array[kx], &array[kx + ix]);
        }
      }
    }
  }
}

int _partition(int *array, int lb, int ub) {
   int pivot = array[lb];
   int small = lb, h;
   for(h = lb+1; h <= ub; h++) {
      if(array[h] < pivot) {
         small++;
         _swap(&array[small], &array[h]);
      }
   }
   _swap(&array[small], &array[lb]);
   return small;
}

void _quick_sort(int *array, int lb, int ub) {
   if(lb < ub) {
      int part = _partition(array, lb, ub);
      _quick_sort(array, lb, part-1);
      _quick_sort(array, part+1, ub);
   }
}

void quick_sort(int *array, int size) {
   _quick_sort(array, 0, size-1);
}
