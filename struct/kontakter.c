
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _person_S{
  char * namn;
  int alder;
}person;

person p1, p2, kontakt[10];

typedef int * ptr_to_int;

int main(void){
  int ix;
  char namn[64], aldersStr[64];

  printf("Välkommen till kontakter!\n");

  /*    Inmatning av kontakter till struct */
  for(int ix = 0; ix < 3; ix++){
      printf("Mata in kontakt nr %d \n", ix+1);
      printf("Ange namn: "); fflush(stdin);
      fgets(namn, 64, stdin);

      //kontakt[ix].namn = namn; //fel - pekare
      namn[strlen(namn)-1] = '\0';

      /*    1. Skapa utrymme för sträng och lägg
              i kontakt[ix].namn  */
      kontakt[ix].namn = malloc(strlen(namn));
      /*    2. Kopiera över namn till kontakt[ix.namn]  */
      strcpy(kontakt[ix].namn, namn);

      /*    Set null terminator at end of name */
      printf("Ange ålder: "); fflush(stdout);
      fgets(aldersStr, 64, stdin);
      kontakt[ix].alder = atoi(aldersStr);
    }

  /*   Print contact  */
  for(int i = 0; i< 3; i++){
      printf("Namn: %d: %s\nÅlder: %d\n\n",
      i+1,
      kontakt[i].namn,
      kontakt[i].alder
    );
  }

  return 0;

}
