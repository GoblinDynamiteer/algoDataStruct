
#include <stdio.h>
#include <stdbool.h>

struct person1{
  char * namn;
  int alder;
}p1, p2;

typedef struct person2{
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
  person *p, kontakter[1000];
  return 0;
}
