#include <iostream>
#include <model.h>
#include <vector3d_.h>
#include <matrix_.h>
#include <cmath>
#include <camera.h>
#include <projection.h>
#include <conio.h>
#include <line.h>
#include <graphics.h>

using namespace std;

int main()
{
    //testing
    model m;
    char file[20] = "teacup.obj";
    m.loadModel(file);

    vector3d_ a(0,20,50);
    vector3d_ b(0,0,1);
    vector3d_ c(0,1,0);


    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode,NULL);

    camera cam(a,b,c);

    for(int i=0;i<m.faceCount;i++){

        drawLine(projectPoint(m.vertices[m.faces[i].vertex1Index[0]].position,cam),projectPoint(m.vertices[m.faces[i].vertex2Index[0]].position,cam));
        drawLine(projectPoint(m.vertices[m.faces[i].vertex2Index[0]].position,cam),projectPoint(m.vertices[m.faces[i].vertex3Index[0]].position,cam));
        drawLine(projectPoint(m.vertices[m.faces[i].vertex3Index[0]].position,cam),projectPoint(m.vertices[m.faces[i].vertex1Index[0]].position,cam));

    }
    getch();
    closegraph();



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

    /*vector3d_ a(0,0,-50);
    vector3d_ b(3,4,5);
    vector3d_ c(0,1,0);

    camera cam(a,b,c);
    cam.getTransformationMatrix().display();
    */

    return 0;
}
