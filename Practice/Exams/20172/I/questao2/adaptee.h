#ifndef ADAPTEE_H
#define ADAPTEE_H

#include <string>

using namespace std;

class Adaptee
{
public:
    Adaptee();
    void setVelocidade(int velocidade);
    void abrirArquivo(string nomeDoArquivo);
    void play();

private:
    int m_velocidade;
    string m_arquivo;
};

#endif // ADAPTEE_H
