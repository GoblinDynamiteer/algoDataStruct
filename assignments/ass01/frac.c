/*    Inlämningsuppgift 1
      Algoritmer och datastrukturer

      Johan Kämpe */


#include "frac.h"

frac plus(frac f1, frac f2){
  frac result;
  if(f1.n == f2.n){
    result.t = f1.t + f2.t;
    result.n = f1.n;
  }
  else{
    result.t = f1.t * f2.n + f2.t * f1.n;
    result.n = f1.n * f2.n;
  }
  return result;
}

frac minus(frac f1, frac f2){
  frac result;
  if(f1.n == f2.n){
    result.t = f1.t - f2.t;
    result.n = f1.n;
  }
  else{
    result.t = f1.t * f2.n - f2.t * f1.n;
    result.n = f1.n * f2.n;
  }
  return result;
}

frac times(frac f1, frac f2){
  frac result;
  result.t = f1.t * f2.t;
  result.n = f1.n * f2.n;
  return result;
}

frac div(frac f1, frac f2){
  frac result;
  result.t = f1.t * f2.n;
  result.n = f1.n * f2.t;
  return result;
}
