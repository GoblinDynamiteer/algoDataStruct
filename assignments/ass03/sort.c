#include "sort.h"

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

void shell_sort(int *array, int size){

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
