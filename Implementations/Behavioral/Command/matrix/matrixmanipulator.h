#ifndef MATRIXMANIPULATOR_H
#define MATRIXMANIPULATOR_H

#include "command.h"

class Matrix;

class MatrixManipulator : public Command
{
public:
    MatrixManipulator(Matrix *m, int x, int y, int act);
    void redo() override;
    void undo() override;

private:
    Matrix *m_matrix;
    int m_x;
    int m_y;
    int m_actual;
    int m_prev;
};

#endif // MATRIXMANIPULATOR_H
