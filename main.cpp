#include <iostream>
#include <model.h>
#include<vector3d_.h>
using namespace std;

int main()
{
    //testing
    model m;
    char file[20] = "model.obj";
    m.loadModel(file);

    for(int i=0;i<m.faceCount;i++){
        //cout<<m.faces[i].vertex1Index[0]<<"//"<<m.faces[i].vertex1Index[1]<<" "<<m.faces[i].vertex2Index[0]<<"//"<<m.faces[i].vertex2Index[1]<<" "<<m.faces[i].vertex3Index[0]<<"//"<<m.faces[i].vertex3Index[1]<<endl;
        cout<<m.vertices[m.faces[i].vertex1Index[0]].position.x<<" "<<m.vertices[m.faces[i].vertex2Index[0]].position.x<<" "<<m.vertices[m.faces[i].vertex3Index[0]].position.x<<endl;
    }
    return 0;
}
