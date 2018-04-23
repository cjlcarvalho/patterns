#ifndef IOBSERVER_H
#define IOBSERVER_H

class ISubject;

class IObserver
{
public:
    virtual void update(ISubject *s) = 0;
};

#endif // IOBSERVER_H
