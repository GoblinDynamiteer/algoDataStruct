#include "pos3d.h"
#include <stdio.h>

/*    Prints 3D vector coordinates */
void printPos3D(pos3D v){
  printf("<%g %g %g>", v.x, v.y, v.z);
}

pos3D pos3DAdd(pos3D v1, pos3D v2){
  pos3D result;
  result.x = v1.x + v2.x;
  result.y = v1.y + v2.y;
  result.z = v1.z + v2.z;
  return result;
}
