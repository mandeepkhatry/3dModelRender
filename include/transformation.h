#ifndef TRANSFORMATION_H_INCLUDED
#define TRANSFORMATION_H_INCLUDED

#include <matrix_.h>
#include <vector3d_.h>
#include <cmath>



matrix_ scale(vector3d_ scaling_factor){
    float s[4][4]= {{scaling_factor.x,0,0,0},{0,scaling_factor.y,0,0},{0,0,scaling_factor.z},{0,0,0,1}};
    return (matrix_(s));
}

matrix_ translate(vector3d_ translation_vector)
{
    float translation[4][4] = {{1,0,0,translation_vector.x},{0,1,0,translation_vector.y},{0,0,1,translation_vector.z},{0,0,0,1}};
    return (matrix_(translation));
}



#endif // TRANSFORMATION_H_INCLUDED
