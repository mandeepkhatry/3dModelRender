
#include "matrix_.h"

#include <vector3d_.h>

matrix_::matrix_()
{
    //ctor

    for (int i=0;i<column;i++){
        for (int j=0;j<row;j++){
            m[i][j] = 0;
        }
    }

}

matrix_::~matrix_()
{
    //dtor
}

matrix_::matrix_(float mat[column][row]){

    for (int i=0;i<column;i++){
        for (int j=0;j<row;j++){
            m[i][j] = mat[i][j];
        }
    }

}

vector3d_ operator *(matrix_ mat, vector3d_ b){
    float ar[4], tem[4], sum;
    ar[0] = b.x;
    ar[1] = b.y;
    ar[2] = b.z;
    ar[3] = b.p;
    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += mat.m[i][j] * ar[j];
        }
        tem[i] = sum;
    }
    vector3d_ o(tem[0], tem[1], tem[2], tem[3]);
    return (o);

}
