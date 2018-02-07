#include "adaptee.h"

#include <iostream>

using namespace std;

Adaptee::Adaptee()
{

}

void Adaptee::setVelocidade(int velocidade)
{
    cout << "Mudando a velocidade para " << velocidade << endl;
    m_velocidade = velocidade;
}

void Adaptee::abrirArquivo(string nomeDoArquivo)
{
    cout << "Abrindo arquivo " << nomeDoArquivo << endl;
    m_arquivo = nomeDoArquivo;
}

void Adaptee::play()
{
    cout << "Tocando..." << endl;
    cout << "Arquivo " << m_arquivo << endl;
    cout << "Velocidade " << m_velocidade << endl;
    cout << endl;
}
