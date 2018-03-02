#ifndef MODEL_H
#define MODEL_H

#include <vertex.h>
#include <face.h>
#include <vector3d_.h>

class model
{
    public:

        bool loadModel(const char *);

        vertex *vertices = new vertex[45000]; // properties - >position and normal in vector3d_
        face *faces = new face[45000];

        int vertexCount, faceCount, normalCount;


};

#endif // MODEL_H
