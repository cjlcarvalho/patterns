#ifndef ITRANSMISSOR_H
#define ITRANSMISSOR_H

class IVideoPlayer;
class IStreamer;
class ICommentaryPublisher;

class ITransmissor
{
public:
    virtual IVideoPlayer *createVideoPlayer() = 0;
    virtual IStreamer *createStreamer() = 0;
    virtual ICommentaryPublisher *createCommentaryPublisher() = 0;
};

#endif // ITRANSMISSOR_H
