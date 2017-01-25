#include <stdio.h>

typedef struct _pos3D_S{
  double x, y, z;
}pos3D;

int main(void){
  double x, y, z;
  x = 1, y = 1, z = 1;
  printf("<%g %g %g>", x, y, z);
  return 0;
}
