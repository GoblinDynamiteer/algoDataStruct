
#include "lib/pos3d.h"

int main(void){
  pos3D v, v1, v2;
  v1.x = 1; v1.y = 2; v1.z = 3;
  v2.x = 0.1; v2.y = 0.2; v2.z = 0.3;
  //v = pos3DAdd(v1,v2) -- EQIV v = v1+v2;
  v = pos3DAdd(v1, v2);
  printPos3D(v);
  return 0;
}
