#include "stack_ll.h"

int is_empty_stack_ll(stack_LL * S){
  return 777;
}

int is_full_stack_ll(stack_LL * S){
  return !(S->numElements < S->maxElements);
}

int push_stack_ll(stack_LL * S, int v){
  if(!is_full_stack_ll(S)){
    S->list = insert_first(v, S->list);
    S->numElements++;
    return 1;
  }
  return 0;
}

int pop_stack_ll(stack_LL * S){
  return 777;
}

int top_stack_ll(stack_LL * S){
  return 777;
}
