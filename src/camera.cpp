#include "camera.h"

camera::camera()
{
    //ctor
}

camera::~camera()
{
    //dtor
}

camera::camera(vector3d_ lookFrom, vector3d_ lookA, vector3d_ viewUp)
{
    position = lookFrom;
    n = (lookFrom-lookA).unitVector();
    u = viewUp.crossProductWith(n).unitVector();
    v = n.crossProductWith(u);
}


matrix_ camera::getTransformationMatrix(){
    float mat[4][4]={{u.x,u.y,u.z,-position.x*u.x-position.y*u.y-position.z*u.z},
                          {v.x,v.y,v.z,-position.x*v.x-position.y*v.y-position.z*v.z},
                          {n.x,n.y,n.z,-position.x*n.x-position.y*n.y-position.z*n.z},
                          {0,0,0,1}};
    return matrix_(mat);

}
