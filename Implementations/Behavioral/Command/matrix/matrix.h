#ifndef MATRIX_H
#define MATRIX_H

class Matrix
{
public:
    Matrix();
    void setXY(int x, int y, int v);
    int getXY(int x, int y) const;
    void printMatrix() const;

private:
    int m_mat[10][10];
};

#endif // MATRIX_H
