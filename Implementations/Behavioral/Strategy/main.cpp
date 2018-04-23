#include "subject.h"
#include "algorithm.h"
#include "first.h"
#include "second.h"

int main()
{
    Subject *s = new Subject;

    s->setAlgorithm(new First);

    s->operation();

    s->setAlgorithm(new Second);

    s->operation();

    return 0;
}
