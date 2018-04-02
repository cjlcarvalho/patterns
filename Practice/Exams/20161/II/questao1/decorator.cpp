#include "decorator.h"

#include "icomponent.h"

#include <QDebug>

Decorator::Decorator(IComponent *decorated) :
    m_decorated(nullptr)
{
    setDecorated(decorated);
}

void Decorator::setDecorated(IComponent *decorated)
{
    if (!m_decorated)
        m_decorated = decorated;
    else {
        Decorator *decorator = dynamic_cast<Decorator *>(m_decorated);
        if (decorator)
            decorator->setDecorated(decorated);
        else
            m_decorated = decorated;
    }
}

void Decorator::aumentarPreco(double percentual)
{
    m_decorated->aumentarPreco(percentual);
}
