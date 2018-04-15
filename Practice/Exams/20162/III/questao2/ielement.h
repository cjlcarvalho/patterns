#ifndef IELEMENT_H
#define IELEMENT_H

#include <QObject>

class IVisitor;

class IElement : public QObject
{
public:
    virtual void accept(IVisitor *visitor) = 0;
};

#endif // IELEMENT_H
