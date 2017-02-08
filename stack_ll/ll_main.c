#include <stdio.h>
#include <stdlib.h>

#include "SL_list.h"

void print_LL(SL_list *LL) {
   if(LL == 0) { 
      printf("NULL\n");
      return;
   }
   printf("%d ", LL->content);
   print_LL(LL->next);
}

int main(void) {
   SL_list *LL = 0, *LL2 = 0;
   print_LL(LL);
   printf("LL == %d\n", is_empty(LL));
   LL2 = get_next(LL);
   LL = insert_first(2, LL);
   /*printf("LL == %d\n", is_empty(LL));*/
   LL = insert_first(3, LL);
   LL = insert_first(5, LL);
   LL = insert_first(7, LL);
   print_LL(LL);
   LL2 = insert_last_2(2, LL2);
   /*printf("LL == %d\n", is_empty(LL));*/
   LL2 = insert_last_2(4, LL2);
   LL2 = insert_last_2(6, LL2);
   LL2 = insert_last_2(8, LL2);
   print_LL(LL2);
   return 0;
}
