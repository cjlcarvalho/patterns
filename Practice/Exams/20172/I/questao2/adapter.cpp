#include "adapter.h"
#include "adaptee.h"

Adapter::Adapter() :
    m_adaptee(nullptr)
{
}

void Adapter::setAdaptee(Adaptee *adaptee)
{
    m_adaptee = adaptee;
}

bool Adapter::play(string nomeDoArquivo, int velocidade)
{
    if (m_adaptee) {
        m_adaptee->abrirArquivo(nomeDoArquivo);
        m_adaptee->setVelocidade(velocidade);
        m_adaptee->play();
        return true;
    }
    return false;
}
