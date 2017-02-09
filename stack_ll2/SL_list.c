#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SL_list.h"

int is_empty(SL_list *LL) {
   if(LL == EMPTYLIST) return 1; else return 0;
}

int current_value(SL_list *LL) {
   if(is_empty(LL)) {
      printf("ERROR: trying to get_first "
             "from NULL pointer\n");
      return 0;
   }
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

SL_list *insert_first(int val, SL_list *LL) {
   SL_list *res = (SL_list *)malloc(sizeof(SL_list));
   res->content = val;
   res->next = LL;
   return res;
}

SL_list *set_next(SL_list *LL, SL_list *new_next) {
   LL->next = new_next;
   return LL;
}

SL_list *insert_last_2(int val, SL_list *LL) {
   if(is_empty(LL))
      return insert_first(val, LL);
   return set_next(LL, insert_last_2(val, get_next(LL)));
}

SL_list *insert_last(int val, SL_list *LL) {
   SL_list *link;
   if(is_empty(LL))
      return insert_first(val, LL);
   link = LL;
   while(!is_empty(get_next(link)))
      link = get_next(link);
   link->next = insert_first(val, 0);
   return LL;
}

char *print_LL(SL_list *LL, char *buffer) {
   int pos;
   if(is_empty(LL)) {
      sprintf(buffer, "NULL");
      return buffer;
   }
   pos = sprintf(buffer, "[");
   while(!is_empty(LL->next)) {
      pos += sprintf(&buffer[pos], "%d, ", LL->content);
      LL = LL->next;
   }
   sprintf(&buffer[pos], "%d]", LL->content);
   return buffer;
}