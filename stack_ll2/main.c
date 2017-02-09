#include <stdio.h>
#include <stdlib.h>

#include "stack_LL.h"
#include "stack_arr.h"

int main(void) {
   stack_LL *stack1 = create_stack_LL(4);
   stack_arr *stack2 = create_stack_arr(4);
   int ix;
   char b[100];

   printf("empty stack_LL: %s\n", getstr_stack_LL(stack1, b));
   push_stack_LL(stack1, 333);
   push_stack_LL(stack1, 365);
   push_stack_LL(stack1, 17);
   push_stack_LL(stack1, 69);
   push_stack_LL(stack1, 666);
   printf("full stack_LL: %s\n", getstr_stack_LL(stack1, b));
   for(ix = 0; ix < 4; ix++)
      if(!pop_stack_LL(stack1))
         printf("ERROR: popped empty stack!\n");
   printf("empty stack_LL: %s\n", getstr_stack_LL(stack1, b));

   printf("------------\n");

   printf("empty stack_arr: %s\n", getstr_stack_arr(stack2, b));
   push_stack_arr(stack2, 333);
   push_stack_arr(stack2, 365);
   push_stack_arr(stack2, 17);
   push_stack_arr(stack2, 69);
   push_stack_arr(stack2, 666);
   for(int i = 0; i < 5; i++){
      push_stack_arr(stack2, i+3);
   }
   printf("full stack_arr: %s\n", getstr_stack_arr(stack2, b));
   for(ix = 0; ix < 4; ix++)
      if(!pop_stack_arr(stack2))
         printf("ERROR: popped empty stack!\n");
   printf("empty stack_arr: %s\n", getstr_stack_arr(stack2, b));

   return 0;
}
