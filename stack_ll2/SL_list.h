#ifndef _SL_LIST_H
#define  _SL_LIST_H

#define EMPTYLIST 0

typedef struct _SL_list_S {
   int content;
   struct _SL_list_S *next;
} SL_list;

/* Om listan är tom returnera 1, annars 0: */
int is_empty(SL_list *LL);
/* returnera innehållet i första länken (noden) */
int get_first(SL_list *LL);
/* returnera nästa länk utifrån angiven länk */
SL_list *get_next(SL_list *LL);
/* returnera en ny länkad lista med angivet innehåll
   tillagt till början av den länkade listan */
SL_list *insert_first(int val, SL_list *LL);
SL_list *insert_last(int val, SL_list *LL);
char *print_LL(SL_list *LL, char *buffer);

#endif