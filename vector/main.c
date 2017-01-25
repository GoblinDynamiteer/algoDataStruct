#include <stdio.h>

typedef struct _pos3D_S{
  double x, y, z;
}pos3D;

int main(void){
  pos3D v;
  v.x = 1; v.y = 1; v.z = 1;
  printf("<%g %g %g>", v.x, v.y, v.z);
  return 0;
}
