#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <QList>

#include "icomponent.h"

class Decorator;

class Composite : public IComponent
{
public:
    Composite();
    bool addChild(IComponent *child);
    bool removeChild(IComponent *child);
    void aumentarPreco(double percentual);
    bool setDecorator(Decorator *decorator) override;

private:
    QList<IComponent *> m_children;
    Decorator *m_decorator;
};

#endif // COMPOSITE_H
