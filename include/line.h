#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include <graphics.h>
#include <math.h>
#include <vector3d_.h>


void drawLine(vector3d_ A, vector3d_ B){

	float dx, dy, xInc, yInc, dInc;
	float dStart = A.z, dEnd = B.z, dVal = dStart, dDepth = dStart - dEnd;
    int step, k = 0;
    dx = B.x - A.x; dy = B.y - A.y;
    if (abs(dx) > abs(dy)){
        step = abs(dx);
        dInc = dDepth / dx;
    }
    else {
    	step = abs(dy);
    	dInc = dDepth / dy;
    }
    xInc = dx/step; yInc = dy/step;
    float x = A.x, y = A.y;
    do
    {
        putpixel(round(x)+100,round(y)+100, RED);
        x+= xInc; y+= yInc; dVal+= dInc;
        k++;
    }
    while(k<=step);
}


#endif // LINE_H_INCLUDED
