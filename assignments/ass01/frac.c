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

/*   Funktion för att hitta minsta gemensamma delare.
  (Från Programmeringsuppgift 5.2, Sida 99 - C från början.)
  Algoritm:
  * dividera m med n och beteckna resten av divisionen med r
  * om r = 0 så är beräkningen klar och divisionen finns i n
  * sätt annars m till n och n till r och gå tillbaka till steg 1 */
int gcd(int t, int n){
  int r;
  while(1){
    r = t % n;
    if (!r){
      return n;
    }
      t = n;
      n = r;
    }
  }
