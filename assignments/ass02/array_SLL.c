/*  Inlämningsuppgift 2
    Algoritmer och datastrukturer

    Johan Kämpe */

#include "array_SLL.h"

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
  /*  Frigör alla noder i den länkade listan  */
  while(!is_empty(array->SL)){
    SL_list * currentNode = array->SL;
    array->SL = get_next(array->SL);
    free(currentNode);
  }
  /*   Frigör array & sätt pekare till NULL  */
  array->SL = 0;
  free(array);
  array = 0;
  return (array == 0);
}

/* Gör: sätter in ett flyttals-värde i arrayen
   Returnerar: 1 om det fanns plats i arrayen, 0 annars */
int insert_SLL( array_SLL *array, double value ) {
  int count = 0;
  SL_list * SL = array->SL;
  /*   Gå igenom listans tills tom plats hittas,
      eller tills alla poster testats.   */
  while(!is_empty(SL)){
    SL = get_next(SL);
    if(count++ >= array->size){
      /*  Array full   */
      return 0;
    }
  }
  #ifdef PRINTOUT
    printf("Set content %g @ index %d\n", value, count);
  #endif
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
  #ifdef PRINTOUT
    printf("Content @ index %d: %g\n", index, SL->content);
  #endif
  return SL->content;
}

/* Gör: letar reda på indexet i arrayen där ett dubbelvärde finns
   Returnerar: indexet, -1 om värdet inte kunde hittas i arrayen */
int find_SLL( array_SLL *array, double value ) {
  int count = 0;
  SL_list * SL = array->SL;
  /*  Gå igenom listan tills värdet hittas, eller tills alla poster
      testats.  */
  while(count++ < array->size){
    /*  Man bör jämföra om flyttal är lika med varandra genom
        att subtrahera dem med varandra och jämföra absolutvärdet
        av differensen mot ett litet tal: */
    if(fabs(SL->content - value) < SMALLNUM){
      #ifdef PRINTOUT
        printf("Found %g @ index %d\n", value, count-1);
      #endif
      return count-1; // -1 då count++ körs i while-loopen
    }
    SL = get_next(SL);
  }
  #ifdef PRINTOUT
    printf("Did not find value %g in list\n", value);
  #endif
  return -1; //Värdet hittades inte
}
