
#include <stdio.h>
#include <stdlib.h>

typedef struct _person_S{
  char * namn;
  int alder;
}person;

person p1, p2, kontakt[10];

typedef int * ptr_to_int;

int main(void){
  int ix;
  char namn[64];

  printf("Välkommen till kontakter!\n");

  /*    Inmatning av kontakter till struct */
  for(int ix = 0; ix < 3; ix++){
      printf("Mata in kontakt nr %d \n", ix+1);
      printf("Ange namn: "); fflush(stdin);
      fgets(namn, 64, stdin);
      kontakt[ix].namn = namn; //fel - pekare
      printf("Ange ålder: "); fflush(stdout);
      fscanf(stdin, "%d", &kontakt[ix].alder); fflush(stdin);
    }

  for(int i = 0; i< 3; i++){
      printf("namn %d: %s\nÅlder: %d\n",
      i,
      kontakt[i].namn,
      kontakt[i].alder
    );
  }

  return 0;

}
