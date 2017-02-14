#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

#define ARRSIZE 15


int check_if_sorted(int *array, int size) {
   int ix;
   for(ix = 0; ix < size-1; ix++) {
      if(array[ix] > array[ix+1]) return 0;
   }
   return 1;
}

int main(){
  int a[ARRSIZE] = {10, 11, 12, 7, 88,10, 11, 12, 7, 88,10, 11, 12, 7, 88};
  for(int i = 0; i < ARRSIZE; i++){
    printf("%d ", a[i]);
  }
  dylan_sort(a, ARRSIZE);
  printf("Sorted: \n");
  for(int i = 0; i < ARRSIZE; i++){
    printf("%d ", a[i]);
  }
}
