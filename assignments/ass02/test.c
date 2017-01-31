#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SL_list.h"
#include "array_SLL.h"

int main(void) {
   array_SLL *ASLL = 0;
   int sllix;
   clock_t c0, cins, clook, cfind;

   ASLL = create_SLL(1000);
   c0 = clock();
   for(sllix = 0; sllix < 1000; sllix++) {
      insert_SLL(ASLL, random()%100);
   }
   cins = clock()-c0;
   printf("Time for 1000 insert_SLL: %d\n", cins);
   c0 = clock();
   for(sllix = 0; sllix < 1000; sllix++) {
      lookup_SLL(ASLL, random()%1000);
   }
   clook = clock()-c0;
   printf("Time for 1000 lookup_SLL: %d\n", clook);
   c0 = clock();
   for(sllix = 0; sllix < 1000; sllix++) {
      find_SLL(ASLL, random()%100);
   }
   cfind = clock()-c0;
   printf("Time for 1000 find_SLL: %d\n", cfind);
   destroy_SLL(ASLL);
}