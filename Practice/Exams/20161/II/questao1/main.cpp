#include <QCoreApplication>

#include "arroz.h"
#include "queijo.h"
#include "twitterdecorator.h"
#include "logdecorator.h"
#include "composite.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Decorator *decoratorStart = new TwitterDecorator(new LogDecorator);
    IComponent *compositeRoot = new Composite;
    IComponent *cereaisRoot = new Composite;
    IComponent *laticiniosRoot = new Composite;
    cereaisRoot->addChild(new Arroz(4.0));
    laticiniosRoot->addChild(new Queijo(10.0));
    compositeRoot->addChild(cereaisRoot);
    compositeRoot->addChild(laticiniosRoot);
    // IComponent *erro1 = new IComponent;
    //Composite *erro2 = new Composite;
    // Decorator *erro3 = new Decorator;
    // Decorator *erro4 = new Decorator(new TwitterDecorator);
    compositeRoot->addChild(new TwitterDecorator);
    decoratorStart->setDecorated(new Arroz(4.0)); // DEVE GERAR EXCEPTION
    compositeRoot->setDecorator(decoratorStart);
    compositeRoot->aumentarPreco(0.1);
    // DEVE EXIBIR:
    // Enviando mensagem via twitter
    // Aumentando o preco do arroz para 4.4
    // Fazendo o log
    // Enviando mensagem via twitter
    // Aumentando o preco do queijo para 11.0
    // Fazendo o log

    return a.exec();
}
