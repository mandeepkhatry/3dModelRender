#ifndef PROJECTION_H_INCLUDED
#define PROJECTION_H_INCLUDED

#include <vector3d_.h>
#include <camera.h>
#include <matrix_.h>
#include <transformation.h>

vector3d_ projectPoint(vector3d_ point, camera cam)
{
    float zprp = 400; //projection reference point
    float zvp= 200; //view plane
    float dp=zprp-zvp;

    float h=(zprp-point.z)/dp;
    float perspective[4][4] = {{1/h,0,0,0},{0,1/h,0,0},{0,0,1,0},{0,0,0,1}};
    matrix_ Tpersp(perspective);
    vector3d_ scalingF(100,100,100);
    vector3d_ translateF(500,100,0);
    return (Tpersp*cam.getTransformationMatrix()*translate(translateF)*scale(scalingF)*point);
}



#endif // PROJECTION_H_INCLUDED
