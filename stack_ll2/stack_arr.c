#include <stdio.h>
#include <stdlib.h>
#include "stack_arr.h"

/* Skapa en ny stack */
stack_arr *create_stack_arr(int maxsize) {
   stack_arr *res = (stack_arr *)malloc(sizeof(stack_arr));
   res->max_elements = maxsize;
   res->num_elements = 0;
   res->list = (int *)malloc(sizeof(int)*maxsize);
   return res;
}
/* Om stacken är tom returnera 1, annars 0: */
int is_empty_stack_arr(stack_arr *S) {
}
/* Om stacken är full returnera 1, annars 0: */
int is_full_stack_arr(stack_arr *S) {
}
/* Lägg in ett element i toppen av stacken: */
int push_stack_arr(stack_arr *S, int v) {
}
/* Ta bort ett element från toppen på stacken: */
int pop_stack_arr(stack_arr *S) {
}
/* Returnera elementet i toppen av stacken: */
int top_stack_arr(stack_arr *S) {
}
/* Konstruera en sträng, och lägg den i buf */
char *getstr_stack_arr(stack_arr *stack, char *buf) {
   char lbuf[100];
   int pos, ix;
   pos = sprintf(buf, "stack_arr {max: %d, num: %d, list: ",
                 stack->max_elements, stack->num_elements);
   if(stack->num_elements == 0) {
      sprintf(&buf[pos], "NULL}");
      return buf;
   }
   pos += sprintf(&buf[pos], "[");
   for(ix = 0; ix < stack->max_elements-1; ix++)
      pos += sprintf(&buf[pos], "%d, ", stack->list[ix]);
   sprintf(&buf[pos], "%d]}", stack->list[ix]);
   return buf;
}