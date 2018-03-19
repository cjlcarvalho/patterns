#ifndef THREAD_H
#define THREAD_H

class Thread
{
public:
    virtual void start() = 0;
    virtual void stop() = 0;
};

#endif // THREAD_H
