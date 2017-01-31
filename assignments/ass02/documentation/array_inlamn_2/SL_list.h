#ifndef _SL_list_h
#define _SL_list_h

typedef struct _SL_list_S {
   double content;
   struct _SL_list_S *next;
} SL_list;

/* Om listan är tom returnera 1, annars 0: */
int is_empty(SL_list *LL);
/* returnera innehållet i första länken (noden) */
double get_first(SL_list *LL);
/* returnera nästa länk utifrån angiven länk */
SL_list *get_next(SL_list *LL);
/* sätt nästa länk, men returnera den nuvarande länken */
SL_list *set_next(SL_list *LL, SL_list *new_next);
/* returnera en ny länkad lista med angivet innehåll
   tillagt till början av den länkade listan */
SL_list *insert_first(double val, SL_list *LL);
/* returnera en ny länkad lista med angivet innehåll
   tillagt till slutet av den länkade listan */
SL_list *insert_last(double val, SL_list *LL);

#endif