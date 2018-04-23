#include "subject.h"
#include "algorithm.h"

Subject::Subject(Algorithm *a) :
    m_algorithm(a)
{
}

void Subject::setAlgorithm(Algorithm *a)
{
    m_algorithm = a;
}

void Subject::operation()
{
    m_algorithm->doAlgorithm();
}
