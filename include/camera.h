#ifndef CAMERA_H
#define CAMERA_H

#include<vector3d_.h>
#include<matrix_.h>

class camera
{
    public:
        camera();
        camera(vector3d_, vector3d_, vector3d_);
        vector3d_ getU(){return u;}
        vector3d_ getV(){return v;}
        vector3d_ getN(){return n;}
        matrix_ getTransformationMatrix();
        virtual ~camera();

    protected:

    private:
        vector3d_ position; //view point or viewing position
        vector3d_ v;  // view up vector unit v
        vector3d_ n ; // viewing direction unit v  (from positon i.e lookfrom - lookat)
        vector3d_ u ; // third vector of V.C.S unit v
};

#endif // CAMERA_H


