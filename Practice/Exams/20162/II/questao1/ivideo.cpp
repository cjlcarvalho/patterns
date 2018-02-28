#include "ivideo.h"
#include "icodec.h"

void IVideo::setCodec(ICodec *codec) 
{
    m_codec = codec;
}

ICodec *IVideo::codec()
{
    return m_codec;
}
