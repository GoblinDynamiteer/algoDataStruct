#include <stdio.h>
#include <stdlib.h>

#include "stack_arr.h"
#include "stack_ll.h"

void print_LL(SL_list *LL) {
  if(LL == 0) {
    printf("NULL\n");
    return;
  }
  printf("%d ", LL->content);
  print_LL(LL->next);
}

void print_stack(stack_LL *stack) {
  print_LL(stack->list);
}

void print_stack_arr(stack_arr *stack) {
  for(int i = 0; i < stack->num_elements; i++){
    printf("%d ", stack->list[i]);
  }
  printf("NULL");
}

int main(void) {
  stack_LL stack1 = {4, 0, 0};
  stack_arr stack2 = {4, 0, 0};
  int ix;
  stack2.list = (int *)malloc(sizeof(int) * 4);
  print_stack(&stack1);
  push_stack_ll(&stack1, 333);
  push_stack_ll(&stack1, 365);
  push_stack_ll(&stack1, 17);
  push_stack_ll(&stack1, 69);
  push_stack_ll(&stack1, 667);
  print_stack(&stack1);
  for(int ix = 0; ix < 9; ix++){
    if(!pop_stack_ll(&stack1)){
      printf("Popped empty Stack!\n");
    }
    print_stack(&stack1);
  }
  printf("Array: \n");
  print_stack_arr(&stack2);
  push_stack_arr(&stack2, 432);
  push_stack_arr(&stack2, 23);
  push_stack_arr(&stack2, 21);
  print_stack_arr(&stack2);
  return 0;
}
