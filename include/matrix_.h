#ifndef MATRIX__H
#define MATRIX__H

#include <vector3d_.h>

const int row =4, column =4;

class matrix_
{
    public:
        matrix_();
        matrix_(float mat[column][row]);

        void display();

        friend vector3d_ operator *(matrix_,vector3d_);

        friend matrix_ operator *(matrix_,matrix_);


        virtual ~matrix_();

    protected:

    private:
        float m[column][row];
};


#endif // MATRIX__H
