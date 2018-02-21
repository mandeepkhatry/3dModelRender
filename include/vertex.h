#ifndef VERTEX_H
#define VERTEX_H

#include<vector3d_.h>

class vertex
{
    public:
        vertex();
        virtual ~vertex();

        vector3d_ position;
        vector3d_ normal;

};

#endif // VERTEX_H
