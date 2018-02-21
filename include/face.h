#ifndef FACE_H
#define FACE_H


class face
{
    public:
        face();
        virtual ~face();

        // triangle mesh -> vertices and normal index according to the indices in vertex array and normal array
        int vertex1Index[2];
        int vertex2Index[2];
        int vertex3Index[2];

};

#endif // FACE_H
