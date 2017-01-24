
#include <stdio.h>
#include <stdlib.h>

struct person1{
  char * namn;
  int alder;
}p1, p2;

typedef struct _person_S{
  char * namn;
  int alder;
}person;

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
  struct person1 *p, kontakter[1000];
  p = (struct person1 *)malloc(sizeof(struct person1));

  /*   Pointer to typedef struct */
  person *pt, tkontakter[1000];
  pt = (person *)malloc(sizeof(person));

  return 0;

}
