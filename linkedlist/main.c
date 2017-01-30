#include "sl_list.h"
#include <assert.h>

int main(void){
  SLList *LL = 0, *LL2 = 0;
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
  LL2 = insertLast2(667, LL2);
  LL2 = insertLast2(55, LL2);
  LL2 = insertLast2(11, LL2);

  int n = 500;
  while(n--){
    LL2 = insertLast2((int)n*1.75, LL2);
  }
  printLL(LL2);
  return 0;
}
