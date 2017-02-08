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
  stack_LL stack1 = {100, 0, 0};
  print_stack(&stack1);
  push_stack_ll(&stack1, 333);
  print_stack(&stack1);
  return 0;
}
