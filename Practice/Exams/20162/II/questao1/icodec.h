#ifndef ICODEC_H
#define ICODEC_H

#include <string>

using namespace std;

class ICodec
{
public:
    virtual string info() = 0;
};

#endif // ICODEC_H
