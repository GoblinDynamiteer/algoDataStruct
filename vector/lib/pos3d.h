

/*	 Include guard	*/
#ifndef POS3D_H_
#define POS3D_H_

/*    struct  */
typedef struct _pos3D_S{
  double x, y, z;
}pos3D;

/*    pos3d.c */
void printPos3D(pos3D v);
pos3D pos3DAdd(pos3D v1, pos3D v2);

#endif /* POS3D_H_ */
