#include "sl_list.h"
#include <assert.h>

int main(void){
  SLList * LL = EMPTY_LIST;
  SLList * LL2 = EMPTY_LIST;
  SLList * RLL = EMPTY_LIST;
  printLL(LL);
  if(isEmpty(LL)){
    printf("LL == %d\n", isEmpty(LL));
  }

  //int a = 1, b = 2;
  //assert(a == b);

  LL = insertFirst(2, LL);
  LL = insertFirst(616, LL);
  LL = insertFirst(666, LL);
  LL = insertFirst(665, LL);
  printLL(LL);

  int n = 10;
  while(n--){
    LL2 = insertLast2((int)n*1.75, LL2);
  }

  printLL(LL2);

  RLL = reverse(LL2);

  printLL(RLL);

  return 0;
}
