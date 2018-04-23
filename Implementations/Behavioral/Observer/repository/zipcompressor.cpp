#include "zipcompressor.h"
#include "document.h"

#include <iostream>

using namespace std;

ZipCompressor::ZipCompressor()
{
}

void ZipCompressor::compress(Document *d)
{
    cout << "ZipCompressor::compress document with state " << d->state() << endl;
}
