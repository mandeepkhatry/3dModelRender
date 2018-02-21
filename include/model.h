#ifndef MODEL_H
#define MODEL_H

#include <vertex.h>
#include <face.h>
#include <vector3d_.h>

class model
{
    public:

        bool loadModel(const char *);

        vertex vertices[5000]; // properties - >position and normal in vector3d_
        face faces[5000];

        int vertexCount, faceCount, normalCount;


};

#endif // MODEL_H
