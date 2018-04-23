#include "matrixmanipulator.h"
#include "matrix.h"

MatrixManipulator::MatrixManipulator(Matrix *m, int x, int y, int act) :
    m_matrix(m),
    m_x(x),
    m_y(y),
    m_actual(act),
    m_prev(0)
{

}

void MatrixManipulator::redo()
{
    m_prev = m_matrix->getXY(m_x, m_y);

    m_matrix->setXY(m_x, m_y, m_actual);
}

void MatrixManipulator::undo()
{
    m_matrix->setXY(m_x, m_y, m_prev);
}
