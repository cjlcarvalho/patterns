#ifndef IVISITOR_H
#define IVISITOR_H

class IElement;

class IVisitor
{
public:
    virtual void visit(IElement *element) = 0;
};

#endif // IVISITOR_H
