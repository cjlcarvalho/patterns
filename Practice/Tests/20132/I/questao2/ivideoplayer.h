#ifndef IVIDEOPLAYER_H
#define IVIDEOPLAYER_H

class IVideoPlayer
{
public:
    virtual void play() = 0;
    virtual void stop() = 0;
};

#endif // IVIDEOPLAYER_H
