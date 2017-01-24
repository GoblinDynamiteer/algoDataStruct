
/*	 Include guard	*/
#ifndef FRAC_H_
#define FRAC_H_

typedef struct _q_S{
  int t;
  int n;
}frac;

frac plus(frac f1, frac f2);
frac minus(frac f1, frac f2);
frac times(frac f1, frac f2);
frac div(frac f1, frac f2);

#endif /* FRAC_H_ */
