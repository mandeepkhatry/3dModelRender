#ifndef MATRIX_H
#define MATRIX_H

#include<vector3d_.h>

int row =4, column =4;

class matrix
{
    public:
        matrix();
        matrix(float mat[column][row]);

        void display();
        friend vector3d_ operator*(matrix,vector3d_);

        virtual ~matrix();

    protected:

    private:
        float m[column][row];
};

#endif // MATRIX_H
