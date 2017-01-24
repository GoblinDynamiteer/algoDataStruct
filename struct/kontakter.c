
#include <stdio.h>
#include <stdlib.h>

struct person{
  char * namn;
  int alder;
}p1, p2;

typedef struct _person_S{
  char * namn;
  int alder;
}person_typedef;

int main(void){
  printf("Välkommen till kontakter!\n");
  p1.namn = "Sven Specimen1";
  p1.alder = 32;
  p2 = p1;
  printf("person - namn: %s, ålder: %d\n",
    p1.namn, p1.alder);
  printf("person - namn: %s, ålder: %d\n",
    p2.namn, p2.alder);

  /*   Pointer to non-typedef struct  */
  struct person *p, kontakter[1000];
  p = (struct person *)malloc(sizeof(struct person));

  /*   Pointer to typedef struct */
  person_typedef *pt, tkontakter[1000];
  pt = (person_typedef *)malloc(sizeof(person_typedef));

  return 0;

}
