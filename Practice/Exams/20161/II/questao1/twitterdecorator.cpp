#include "twitterdecorator.h"

#include <QDebug>

TwitterDecorator::TwitterDecorator(IComponent *decorated) :
    Decorator(decorated)
{

}

void TwitterDecorator::aumentarPreco(double percentual)
{
    qDebug() << "Enviando mensagem via twitter";
    Decorator::aumentarPreco(percentual);
}
