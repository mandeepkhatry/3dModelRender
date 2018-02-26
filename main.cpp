#include <iostream>
#include <model.h>
#include <vector3d_.h>
#include <matrix_.h>
#include <cmath>
#include <camera.h>
using namespace std;

int main()
{
    //testing
    /*model m;
    char file[20] = "model.obj";
    m.loadModel(file);

    for(int i=0;i<m.faceCount;i++){
        //cout<<m.faces[i].vertex1Index[0]<<"//"<<m.faces[i].vertex1Index[1]<<" "<<m.faces[i].vertex2Index[0]<<"//"<<m.faces[i].vertex2Index[1]<<" "<<m.faces[i].vertex3Index[0]<<"//"<<m.faces[i].vertex3Index[1]<<endl;
        cout<<m.vertices[m.faces[i].vertex1Index[0]].position.x<<" "<<m.vertices[m.faces[i].vertex2Index[0]].position.x<<" "<<m.vertices[m.faces[i].vertex3Index[0]].position.x<<endl;
    }
    */
    /*
    float a[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    vector3d_ b(1,2,3,4);
    matrix_ m(a);

    vector3d_ o = m*b;

    */
    /*
    vector3d_ a(1,2,1);
    vector3d_ b(2,4,1);
    vector3d_ o = a.crossProductWith(b);
    cout<<o.x<<" , "<< o.y<< " ,"<< o.z <<" ," <<o.p;
    */
    /*vector3d_ a(1,1,1);
    vector3d_ b(3,4,5);
    vector3d_ c(0,1,0);

    camera cam(a,b,c);
    cam.getTransformationMatrix().display();
    */

    return 0;
}
