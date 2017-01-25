/*    Inlämningsuppgift 1
      Algoritmer och datastrukturer

      Johan Kämpe */

#include "frac.h"

/*  Addition på bråktal   */
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
  return simplifyFrac(result);
}

/*  Subtraktion på bråktal  */
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
  return simplifyFrac(result);
}

/*   Multiplikation på bråktal  */
frac times(frac f1, frac f2){
  frac result;
  result.t = f1.t * f2.t;
  result.n = f1.n * f2.n;
  return simplifyFrac(result);
}

/*  Division på bråktal   */
frac div(frac f1, frac f2){
  frac result;
  result.t = f1.t * f2.n;
  result.n = f1.n * f2.t;
  return simplifyFrac(result);
}

/*  Hitta minsta gemensamma delare, och
    förkorta bråktalet.
    Från Programmeringsuppgift 5.2,
    Sida 99 - C från början.)
      Algoritm:
  * dividera m med n och beteckna
    resten av divisionen med r
  * om r = 0 så är beräkningen
    klar och divisionen finns i n
  * sätt annars m till n och n till r
    och gå tillbaka till steg 1 */
int findGCD(int m, int n){
  int r;
  while(1){
    r = m % n;
    if (!r){
      return n;
    }
    m = n;
    n = r;
  }
  return 0; //Ska inte komma hit
}

/*  Dividera täljare och nämnare
    med minsta gemensamma delare,
    om denna inte är 1 (har ingen effekt)  */
frac simplifyFrac(frac frac){
  int divisor = findGCD(frac.t, frac.n);
  if(divisor != 1){
    frac.t /= divisor;
    frac.n /= divisor;
  }
  return frac;
}
