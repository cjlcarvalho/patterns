#include "matrixmultiplier.h"
#include "matrix.h"

MatrixMultiplier::MatrixMultiplier(Matrix *m, int x, int y, int v) :
    m_matrix(m),
    m_x(x),
    m_y(y),
    m_value(v)
{

}

void MatrixMultiplier::redo()
{
    m_matrix->setXY(m_x, m_y, m_matrix->getXY(m_x, m_y) * m_value);
}

void MatrixMultiplier::undo()
{
    m_matrix->setXY(m_x, m_y, m_matrix->getXY(m_x, m_y) / m_value);
}
