#include "stack_ll.h"
#include <stdlib.h>

/*   Check if stack is empty  */
int is_empty_stack_ll(stack_LL * S){
  return (S->numElements <= 0);
}

/*   Checks if stack is full  */
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

/*   Remove first item  */
int pop_stack_ll(stack_LL * S){
  if(!is_empty_stack_ll(S)){
    SL_list * save = S->list;
    S->list = get_next(S->list);
    free(save); //free from memory
    S->numElements--;
    return 1;
  }
  return 0;
}

int top_stack_ll(stack_LL * S){
  return 777;
}
