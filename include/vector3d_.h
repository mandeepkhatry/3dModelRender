#ifndef VECTOR3D__H
#define VECTOR3D__H

#include<cmath>

class vector3d_
{
    public:
        vector3d_();
        vector3d_(double,double,double,double d=1);
        virtual ~vector3d_();

        double getMagnitude(){return sqrt(x*x+y*y+z*z);}

        double x,y,z,p;
};

#endif // VECTOR3D__H
