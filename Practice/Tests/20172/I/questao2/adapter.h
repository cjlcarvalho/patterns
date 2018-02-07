#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"

#include <string>

using namespace std;

class Adaptee;

class Adapter : public Target
{
public:
    Adapter();
    void setAdaptee(Adaptee *adaptee);
    bool play(string nomeDoArquivo, int velocidade);

private:
    Adaptee *m_adaptee;
};

#endif // ADAPTER_H
