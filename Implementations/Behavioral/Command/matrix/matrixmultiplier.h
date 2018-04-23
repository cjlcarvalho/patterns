#ifndef MATRIXMULTIPLIER_H
#define MATRIXMULTIPLIER_H

#include "command.h"

class Matrix;

class MatrixMultiplier : public Command
{
public:
    MatrixMultiplier(Matrix *m, int x, int y, int v);
    void redo() override;
    void undo() override;

private:
    Matrix *m_matrix;
    int m_x;
    int m_y;
    int m_value;
};

#endif // MATRIXMULTIPLIER_H
