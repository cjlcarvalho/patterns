#ifndef JOGADOR_H
#define JOGADOR_H

#include "observer.h"

class Subject;

class Jogador : public Observer
{
public:
    Jogador();
    void update(Subject *subject) override;

private:
    int m_x;
    int m_y;
};

#endif // JOGADOR_H
