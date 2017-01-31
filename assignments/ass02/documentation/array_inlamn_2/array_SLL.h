#ifndef _array_SLL_h
#define _array_SLL_h

#include "SL_list.h"

typedef struct _array_SLL_S {
   int size;
   SL_list *SL;
} array_SLL;

/* Gör: skapar en array med storleken size,
   Returnerar: den nya arrayen */
array_SLL *create_SLL( int size );
/* Gör: tar bort en array som tidigare skapats,
   Returnerar: 1 om något togs bort, 0 om inget togs bort */
int destroy_SLL( array_SLL *array );
/* Gör: sätter in ett flyttals-värde i arrayen
   Returnerar: 1 om det fanns plats i arrayen, 0 annars */
int insert_SLL( array_SLL *array, double value );
/* Gör: slå upp arrayen på indexet
   Returnerar: värdet som fanns på indexet */
double lookup_SLL( array_SLL *array, int index );
/* Gör: letar reda på indexet i arrayen där ett dubbelvärde finns
   Returnerar: indexet, -1 om värdet inte kunde hittas i arrayen */
int find_SLL( array_SLL *array, double value );

#endif