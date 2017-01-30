#include "sl_list.h"

int main(void){
  SLList *LL = 0, *LL2 = 0;
  printLL(LL);
  if(isEmpty(LL)){
    printf("LL == %d\n", isEmpty(LL));
  }
  LL = insertFirst(2, LL);
  LL = insertFirst(616, LL);
  LL = insertFirst(666, LL);
  LL = insertFirst(665, LL);
  printLL(LL);
  LL2 = insertLast(667, LL2);
  LL2 = insertLast(55, LL2);
  LL2 = insertLast(11, LL2);

  int n = 100;
  while(n--){
    LL2 = insertLast((int)n*1.253, LL2);
  }
  printLL(LL2);
  return 0;
}
