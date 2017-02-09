#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "stack_LL.h"

/* Skapa en ny stack */
stack_LL *create_stack_LL(int maxsize) {
   stack_LL *res = (stack_LL *)malloc(sizeof(stack_LL));
   res->max_elements = maxsize;
   res->num_elements = 0;
   res->list = EMPTYLIST;
   return res;
}
/* Om stacken är tom returnera 1, annars 0: */
int is_empty_stack_LL(stack_LL *S) {
   return S->num_elements <= 0;
}
/* Om stacken är full returnera 1, annars 0: */
int is_full_stack_LL(stack_LL *S) {
   return S->num_elements >= S->max_elements;
}
/* Lägg in ett element i toppen av stacken: */
int push_stack_LL(stack_LL *S, int v) {
   if(!is_full_stack_LL(S)) {
      S->list = insert_first(v, S->list);
      S->num_elements++;
      return 1;
   }
   return 0;
}
/* Ta bort ett element från toppen på stacken: */
int pop_stack_LL(stack_LL *S) {
   if(!is_empty_stack_LL(S)) {
      SL_list *save = S->list;
      S->list = get_next(S->list);
      free(save);
      S->num_elements--;
      return 1;
   }
   return 0;
}
/* Returnera elementet i toppen av stacken: */
int top_stack_LL(stack_LL *S) {
   if(is_empty_stack_LL(S)) {
      printf("ERROR: top_stack_LL on empty stack\n");
      return INT_MAX;
   }
   return S->list->content;
}
/* Konstruera en sträng, och lägg den i buf */
char *getstr_stack_LL(stack_LL *stack, char *buf) {
   char lbuf[100];
   sprintf(buf, "stack_LL {max: %d, num: %d, list: %s} ",
           stack->max_elements, stack->num_elements,
           print_LL(stack->list, lbuf));
   return buf;
}