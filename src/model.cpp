#include "model.h"
#include <iostream>
#include <cstring>
#include <vector3d_.h>
#include <stdio.h>

bool model::loadModel(const char* modelPath){

    vertexCount=0,normalCount=0,faceCount=0;

    FILE * file = fopen(modelPath, "r");
    if( file == NULL ){
        return false;
    }
    while(1){
        char lineHeader[1024];

        int res = fscanf(file, "%s", lineHeader);
        if (res == EOF)
            break;

        if (strcmp(lineHeader, "v" ) == 0 ){
            vector3d_ tempV;

            fscanf(file, "%lf %lf %lf\n", &tempV.x, &tempV.y, &tempV.z);
            vertices[vertexCount].position = tempV;
            vertexCount++;

        }

        //'vn' is normal vector to the vertex and may not be unit vectors
        else if(strcmp(lineHeader, "vn")==0){
            vector3d_ tempN;
            fscanf(file, "%lf %lf %lf\n", &tempN.x, &tempN.y, &tempN.z);
            vertices[normalCount].normal = tempN;
            normalCount++;
        }
        //'f' for faces
        else if(strcmp(lineHeader,"f")==0){
            int v1I,v2I,v3I;
            int n1I, n2I,n3I;
            fscanf(file,"%d//%d %d//%d %d//%d\n", &v1I,&n1I,&v2I,&n2I,&v3I,&n3I);

            faces[faceCount].vertex1Index[0] = v1I-1;
            faces[faceCount].vertex1Index[1] = n1I-1;

            faces[faceCount].vertex2Index[0] = v2I-1;
            faces[faceCount].vertex2Index[1] = n2I-1;

            faces[faceCount].vertex3Index[0] = v3I-1;
            faces[faceCount].vertex3Index[1] = n3I-1;

            faceCount++;
        }

    }
    return true;
}
