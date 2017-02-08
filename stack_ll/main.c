#include <stdio.h>
#include <stdlib.h>

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

int main(void) {
  stack_LL stack1 = {4, 0, 0};
  int ix;
  print_stack(&stack1);
  push_stack_ll(&stack1, 333);
  push_stack_ll(&stack1, 365);
  push_stack_ll(&stack1, 17);
  push_stack_ll(&stack1, 69);
  push_stack_ll(&stack1, 667);
  print_stack(&stack1);
  for(int ix = 0; ix < 5; ix++){
    pop_stack_ll(&stack1);
    print_stack(&stack1);
  }
  return 0;
}
