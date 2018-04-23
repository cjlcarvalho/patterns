#ifndef ZIPCOMPRESSOR_H
#define ZIPCOMPRESSOR_H

#include "compressor.h"

class Document;

class ZipCompressor : public Compressor
{
public:
    ZipCompressor();
    void compress(Document *d) override;
};

#endif // ZIPCOMPRESSOR_H
