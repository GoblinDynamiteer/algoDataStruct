#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "sort.h"

#define ARRSIZE 10

int main(){
  int a[ARRSIZE] = {10, 11, 12, 7, 5, 4, 3, 19, 99, 12};
  for(int i = 0; i < ARRSIZE; i++){
    printf("%d\n", a[i]);
  }
  shell_sort(a, ARRSIZE);
  printf("Sorted: \n");
  for(int i = 0; i < ARRSIZE; i++){
    printf("%d\n", a[i]);
  }
}
