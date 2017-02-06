#include "sl_list.h"
#include <assert.h>
#include <stdlib.h>
#include <time.h>

int main(void){
  SLList * LL = EMPTY_LIST;
  SLList * LL2 = EMPTY_LIST;
  SLList * RLL = EMPTY_LIST;
  SLList * SLL = EMPTY_LIST;

  printLL(LL);
  if(isEmpty(LL)){
    printf("LL == %d\n", isEmpty(LL));
  }

  //int a = 1, b = 2;
  //assert(a == b);

  srand(time(NULL));

  LL = insertFirst(2, LL);
  LL = insertFirst(616, LL);
  LL = insertFirst(666, LL);
  LL = insertFirst(665, LL);

  SLL = insertSorted(4, SLL);
  SLL = insertSorted(4, SLL);
  SLL = insertSorted(3, SLL);
  SLL = insertSorted(9, SLL);
  SLL = insertSorted(31, SLL);
  SLL = insertSorted(12, SLL);

  printLL(LL);

  printf("Sorterad lista:\n");
  printLL(SLL);

  int n = 10;
  while(n--){
    LL2 = insertLast2((int)n*1.75, LL2);
  }

  printLL(LL2);

  RLL = reverse(LL2);

  printLL(RLL);

  return 0;
}
