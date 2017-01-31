/*  Inlämningsuppgift 2
    Algoritmer och datastrukturer

    Johan Kämpe */

#include "array_SLL.h"
#include <stdlib.h>
#include <stdio.h>

/* Gör: skapar en array med storleken size,
   Returnerar: den nya arrayen */
array_SLL *create_SLL( int size ) {
  array_SLL * array = (array_SLL *)malloc(sizeof(array_SLL));
  array->SL = 0;
  array->size = size;
  return array;
}

/* Gör: tar bort en array som tidigare skapats,
   Returnerar: 1 om något togs bort, 0 om inget togs bort */
int destroy_SLL( array_SLL *array ) {
  array = 0;
  return (array == 0);
}

/* Gör: sätter in ett flyttals-värde i arrayen
   Returnerar: 1 om det fanns plats i arrayen, 0 annars */
int insert_SLL( array_SLL *array, double value ) {
  int count = 0;
  SL_list * SL = array->SL;
  while(!is_empty(SL)){
    SL = get_next(SL);
    if(count++ >= array->size){
      /*  Array full   */
      return 0;
    }
  }
  //printf("Set content %g @ index %d\n", value, count);
  array->SL = insert_last(value, array->SL);
  return 1;
}

/* Gör: slå upp arrayen på indexet
   Returnerar: värdet som fanns på indexet */
double lookup_SLL( array_SLL *array, int index ) {
  int count = 0;
  SL_list * SL = array->SL;
  while(count++ < index){
    SL = get_next(SL);
  }
  //printf("Content @ index %d: %g\n", index, SL->content);
  return SL->content;
}

/* Gör: letar reda på indexet i arrayen där ett dubbelvärde finns
   Returnerar: indexet, -1 om värdet inte kunde hittas i arrayen */
int find_SLL( array_SLL *array, double value ) {
  int count = 0;
  SL_list * SL = array->SL;
  while(count++ < array->size){
    if(SL->content == value){
      //printf("Found %g @ index %d\n", value, count-1);
      return count-1;
    }
    SL = get_next(SL);
  }
  return -1;
}
