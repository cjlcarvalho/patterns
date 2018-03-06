#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <QList>

#include "icomponent.h"

class Decorator;

class Composite : public IComponent
{
public:
    bool addChild(IComponent *child);
    bool removeChild(IComponent *child);
    void aumentarPreco(double percentual);
    void setDecorator(Decorator *decorator);

private:
    QList<IComponent *> m_children;
};

#endif // COMPOSITE_H
