/*    Inlämningsuppgift 1
      Algoritmer och datastrukturer

      Johan Kämpe */


/*	 Include guard	*/
#ifndef FRAC_H_
#define FRAC_H_

/*    Struct för bråktal i 3/5 form */
typedef struct _q_S{
  int t;  //Täljare
  int n;  //Nämnare
}frac;

frac plus(frac f1, frac f2);
frac minus(frac f1, frac f2);
frac times(frac f1, frac f2);
frac div(frac f1, frac f2);
int gcd(int t, int n);

#endif /* FRAC_H_ */
