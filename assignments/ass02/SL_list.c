#include <stdlib.h>
#include <stdio.h>
#include "SL_list.h"

int is_empty(SL_list *LL) {
   if(LL == 0) return 1; else return 0;
}

double get_first(SL_list *LL) {
   return LL->content;
}

SL_list *get_next(SL_list *LL) {
   if(is_empty(LL)) {
      printf("ERROR: trying to get_next "
             "from NULL pointer\n");
      return 0;
   }
   return LL->next;
}

SL_list *insert_first(double val, SL_list *LL) {
   SL_list *res = (SL_list *)malloc(sizeof(SL_list));
   res->content = val;
   res->next = LL;
   return res;
}

SL_list *set_next(SL_list *LL, SL_list *new_next) {
   LL->next = new_next;
   return LL;
}

SL_list *insert_last(double val, SL_list *LL) {
   if(is_empty(LL))
      return insert_first(val, LL);
   return set_next(LL, insert_last(val, get_next(LL)));
}
