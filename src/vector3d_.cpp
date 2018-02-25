
#include "vector3d_.h"



vector3d_::vector3d_(): x(0), y(0), z(0), p(1)
{

    //ctor
}

vector3d_::~vector3d_()
{
    //dtor
}

vector3d_::vector3d_(double a =0, double b =0, double c =0, double d): x(a), y(b), z(c), p(d){}


vector3d_ vector3d_::  crossProductWith(vector3d_ b){
    vector3d_ o(y*b.z-z*b.y  ,b.x*z-x*b.z  ,x*b.y-y*b.x);
    return o;
}
