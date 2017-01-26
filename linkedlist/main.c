#include <stdio.h>
#include <stdlib.h>

typedef struct _SL_list_S{
  int content;
  struct _SL_list_S * next;
}SLList;

/*    Checks if list s empty / NULL */
int isEmpty(SLList *LL){
  return (LL == 0);
}

void printLL(SLList *LL){
  if(!LL){
    printf("Null\n");
  }
}

/*   Inserts first item in list  */
SLList * insertFirst(int val, SLList *LL){
  SLList * result = (SLList *)malloc(sizeof(SLList));
  result->content = val;
  result->next = LL;
  return LL;
}

int main(void){
  SLList *LL = 0;
  printLL(LL);
  if(isEmpty(LL)){
    printf("LL == %d\n", isEmpty(LL));
  }
  SLList * node1 = insertFirst(76, LL);
  SLList * node2 = insertFirst(12, node1);
  printf("i node2: %d", node1->next->content);
  return 0;
}
