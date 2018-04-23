#include "matrix.h"

#include <iostream>

using namespace std;

Matrix::Matrix()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            m_mat[i][j] = 0;
}

void Matrix::setXY(int x, int y, int v)
{
    if (x >= 0 && x < 10 && y >= 0 && y < 10)
        m_mat[x][y] = v;
    else
        cout << "Out of bounds" << endl;
}

int Matrix::getXY(int x, int y) const
{
    if (x >= 0 && x < 10 && y >= 0 && y < 10)
        return m_mat[x][y];
    else {
        cout << "Couldn't find this position, returning INFINITY" << endl;
        return 1000000;
    }
}

void Matrix::printMatrix() const
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            cout << m_mat[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
