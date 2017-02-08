#include "SL_list.h"

typedef struct _Struct_LL_S{
   int maxElements;
   int numElements;
   SL_list *list;
}stack_LL;

int is_empty_stack_ll(stack_LL * S);
int is_full_stack_ll(stack_LL * S);
int push_stack_ll(stack_LL * S, int v);
int pop_stack_ll(stack_LL * S);
int top_stack_ll(stack_LL * S);
