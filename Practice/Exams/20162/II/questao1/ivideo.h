#ifndef IVIDEO_H
#define IVIDEO_H

#include "icomponent.h"

class ICodec;

class IVideo : public IComponent
{
public:
    void setCodec(ICodec *codec);
    ICodec *codec();
    virtual void play() = 0;

private: 
    ICodec *m_codec;
};

#endif // IVIDEO_H
