
#include "matrix_.h"
#include <iostream>
#include <vector3d_.h>
#include <iomanip>

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
    if(column !=4){
        m[0][3] = 0;
        m[1][3] = 0;
        m[2][3] = 0;
        m[3][3] = 1;
    }


}

matrix_ operator*(matrix_ mat1,matrix_ mat2){
	float sum;
	int i,j,k;
	float mat3[4][4];
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			sum=0;
			for(k=0; k<4; k++)
			{
				sum = sum + mat1.m[i][k] * mat2.m[k][j];
			}
			mat3[i][j] = sum;
		}
	}
	return matrix_(mat3);

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

void matrix_::display(){

    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
            std::cout <<std::setw(15)<< m[i][j] ;
        }
        std::cout<<std::endl;
    }

}


