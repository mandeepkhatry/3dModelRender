#ifndef CAMERA_H
#define CAMERA_H

#include<vector3d_.h>

class camera
{
    public:
        camera();
        camera(vector3d_ position, vector3d_ v, vector3d_ n, vector3d_ u);
        virtual ~camera();

    protected:

    private:
        vector3d_ position; //view point or viewing position
        vector3d_ v;  // view up vector
        vector3d_ n ; // viewing direction
        vector3d_ u ; // third vector of V.C.S
};

#endif // CAMERA_H


