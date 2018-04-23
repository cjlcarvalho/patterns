#ifndef COMPRESSOR_H
#define COMPRESSOR_H

class Document;

class Compressor
{
public:
    virtual void compress(Document *d) = 0;
};

#endif // COMPRESSOR_H
