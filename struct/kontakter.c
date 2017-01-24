
#include <stdio.h>
#include <stdlib.h>

typedef struct _person_S{
  char * namn;
  int alder;
}person;

person p1, p2;

typedef int * ptr_to_int;

int main(void){
  int pek = 2;
  ptr_to_int a;
  printf("Välkommen till kontakter!\n");
  p1.namn = "Sven Specimen";
  p1.alder = 32;
  p2 = p1;
  a = &pek;
  printf("person - namn: %s, ålder: %d\n",
    p1.namn, p1.alder);
  printf("person - namn: %s, ålder: %d\n",
    p2.namn, p2.alder);

  /*   Pointer to typedef struct */
  person *p, tkontakter[1000];
  p = (person *)malloc(sizeof(person));

  return 0;

}
