#include "SL_list.h"

typedef struct _stack_LL_S {
    int max_elements, num_elements;
    SL_list *list;
} stack_LL;

/* Skapa en ny stack */
stack_LL *create_stack_LL(int maxsize);
/* Om stacken är tom returnera 1, annars 0: */
int is_empty_stack_LL(stack_LL *S);
/* Om stacken är full returnera 1, annars 0: */
int is_full_stack_LL(stack_LL *S);
/* Lägg in ett element i toppen av stacken: */
int push_stack_LL(stack_LL *S, int v);
/* Ta bort ett element från toppen på stacken: */
int pop_stack_LL(stack_LL *S);
/* Returnera elementet i toppen av stacken: */
int top_stack_LL(stack_LL *S);
/* Konstruera en sträng, och lägg den i buf */
char *getstr_stack_LL(stack_LL *stack, char *buf);
