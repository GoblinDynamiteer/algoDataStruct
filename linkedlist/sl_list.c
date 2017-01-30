#include "sl_list.h"

/*    Checks if list s empty / NULL */
int isEmpty(SLList *LL){
  return (LL == 0);
}

/*   Inserts first item in list  */
SLList * insertFirst(int val, SLList *LL){
  SLList * result = (SLList *)malloc(sizeof(SLList));
  result->content = val;
  result->next = LL;
  return result;
}

SLList *getNext(SLList *LL){
  return 0;
}

SLList * insertLast(int val, SLList *LL){
  SLList *link;
  if(isEmpty(LL)){
    return insertFirst(val, LL);
  }
  link = LL;
  while(link->next != 0){
    link = link->next;
  }
  link->next = insertFirst(val, 0);
  return LL;
}

void printLL(SLList *LL){
  if(!LL){
    printf("Null\n");
    return;
  }
  printf("%d ", LL->content);
  printLL(LL->next);
}

int getFirst(SLList *LL){
  return 1;
}
