#ifndef _SL_LIST_H
#define _SL_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct _SL_list_S{
  int content;
  void * inget;
  struct _SL_list_S * next;
}SLList;

#define EMPTY_LIST 0

int isEmpty(SLList *LL);
SLList * insertFirst(int val, SLList *LL);
SLList * insertLast(int val, SLList *LL);
SLList * insertLast2(int val, SLList *LL);
SLList * getNext(SLList *LL);
int getFirst(SLList *LL);
void printLL(SLList *LL);
SLList * reverse(SLList *LL);
SLList * insertSorted(int val, SLList *LL);

#endif
