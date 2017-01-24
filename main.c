/*    Inlämningsuppgift 1
      Algoritmer och datastrukturer

      Johan Kämpe */

/*  Tester av funktioner i frac.h / frac.c     */

#include "assignments/ass01/frac.h"
#include <stdio.h>

int main(void){
  frac f1, f2, result;
  f1.t = 11;
  f1.n = 118;
  f2.t = 65;
  f2.n = 652;
  printf("f1: %d / %d\nf2: %d / %d\n",
    f1.t,f1.n,f2.t,f2.n
  );
  result = plus(f1, f2);
  printf("ADD: Result: %d / %d\n", result.t, result.n);
  result = minus(f1, f2);
  printf("SUB: Result: %d / %d\n", result.t, result.n);
  result = times(f1, f2);
  printf("MULT: Result: %d / %d\n", result.t, result.n);
  result = div(f1, f2);
  printf("DIV: Result: %d / %d\n", result.t, result.n);
  return 0;
}
