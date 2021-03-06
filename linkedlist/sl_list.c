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

/*   Inserts value in sorted order  */
SLList * insertSorted(int val, SLList *LL){
  /*  Insert value first if list is empty or
      val is smallest next value to insert */
  if((isEmpty(LL)) || (getFirst(LL) < val)){
    return insertFirst(val, LL);
  }
  if(isEmpty(getNext(LL))){
      LL->next = insertFirst(val, EMPTY_LIST);
      return LL;
  }
  if(getFirst(getNext(LL)) >= val){
    LL->next = insertFirst(val, getNext(LL));
    return LL;
  }
  LL->next = insertSorted(val, LL->next);
}

/*    Return next item in list */
SLList *getNext(SLList *LL){
  if(isEmpty(LL)){
    printf("ERROR: Trying to get next from NULL pointer!");
    return 0;
  }
  return LL->next;
}

/*   Inserts item last in list  */
SLList * insertLast(int val, SLList *LL){
  SLList *link;
  if(isEmpty(LL)){
    return insertFirst(val, LL);
  }
  link = LL;
  while(!isEmpty(getNext(link))){
    link = getNext(link);
  }
  link->next = insertFirst(val, 0);
  return LL;
}

SLList * setNext(SLList *LL, SLList *newNext){
  LL->next = newNext;
  return LL;
}

/*   Teacher variant */
SLList * insertLast2(int val, SLList *LL){
  if(isEmpty(LL)){
    return insertFirst(val, LL);
  }
  return setNext(LL, insertLast2(val, getNext(LL)));
}

/*   Prints list values  */
void printLL(SLList *LL){
  if(!LL){
    printf("Null\n");
    return;
  }
  printf("%d ", LL->content);
  printLL(LL->next);
}

int getFirst(SLList *LL){
  return LL->content;
}

/*   Copy node content, insert first  */
SLList * copyNode(SLList *pLL, SLList *rLL){
  return insertFirst(pLL->content, rLL);
}

/*   Reverses a linked list  */
SLList * reverse(SLList *LL){
  SLList * pLL = LL, *revLL = EMPTY_LIST;
  while(!isEmpty(pLL)){
    revLL = copyNode(pLL, revLL);
    pLL = getNext(pLL);
  }
  return revLL;
}
