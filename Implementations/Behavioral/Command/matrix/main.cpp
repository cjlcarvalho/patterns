#include "command.h"
#include "commandhistory.h"
#include "matrix.h"
#include "matrixmanipulator.h"
#include "matrixmultiplier.h"

int main()
{
    Matrix *mat = new Matrix;

    CommandHistory *cmd = new CommandHistory;

    Command *mm = new MatrixManipulator(mat, 1, 5, 7);
    mm->redo();
    cmd->addCommand(mm);

    mat->printMatrix();

    Command *mm2 = new MatrixMultiplier(mat, 1, 5, 10);
    mm2->redo();
    cmd->addCommand(mm2);

    mat->printMatrix();

    cmd->undoCommand();

    mat->printMatrix();

    Command *mm3 = new MatrixManipulator(mat, 1, 5, 8);
    mm3->redo();
    cmd->addCommand(mm3);

    mat->printMatrix();

    cmd->undoCommand();

    mat->printMatrix();

    cmd->undoCommand();

    mat->printMatrix();

    return 0;
}
