#include "decorator.h"

#include "icomponent.h"

#include <QDebug>

Decorator::Decorator(IComponent *decorated)
{
    setDecorated(decorated);
}

void Decorator::setDecorated(IComponent *decorated)
{
    if (decorated)
        m_decorated = decorated;
    else if (m_decorated)
        qDebug() << "Already have a decorated instance.";
    else
        qDebug() << "Trying to set nullptr to decorated.";
}

void Decorator::aumentarPreco(double percentual)
{
    m_decorated->aumentarPreco(percentual);
}
