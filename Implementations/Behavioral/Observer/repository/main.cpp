#include "subject.h"
#include "observer.h"
#include "repository.h"
#include "document.h"
#include "compressor.h"
#include "zipcompressor.h"

int main()
{
    Compressor *c = new ZipCompressor;

    Repository *s = new Repository("UNCOMMITED");

    s->attach(new Document(c));
    s->attach(new Document); // WITHOUT COMPRESSING ALGORITHM
    s->attach(new Document(c));

    s->changeState("PUSH");

    return 0;
}
