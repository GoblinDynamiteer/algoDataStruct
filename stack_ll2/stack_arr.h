#include "SL_list.h"

typedef struct _stack_arr_S {
    int max_elements, num_elements;
    int *list;
} stack_arr;

/* Skapa en ny stack */
stack_arr *create_stack_arr(int maxsize);
/* Om stacken är tom returnera 1, annars 0: */
int is_empty_stack_arr(stack_arr *S);
/* Om stacken är full returnera 1, annars 0: */
int is_full_stack_arr(stack_arr *S);
/* Lägg in ett element i toppen av stacken: */
int push_stack_arr(stack_arr *S, int v);
/* Ta bort ett element från toppen på stacken: */
int pop_stack_arr(stack_arr *S);
/* Returnera elementet i toppen av stacken: */
int top_stack_arr(stack_arr *S);
/* Konstruera en sträng, och lägg den i buf */
char *getstr_stack_arr(stack_arr *stack, char *buf);
