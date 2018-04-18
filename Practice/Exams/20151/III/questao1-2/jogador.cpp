#include "jogador.h"
#include "subject.h"
#include "tanque.h"

#include <iostream>

using namespace std;

Jogador::Jogador() :
    m_x(0),
    m_y(0)
{

}

void Jogador::update(Subject *subject)
{
    Tanque *tanque = dynamic_cast<Tanque *>(subject);

    if (tanque) {
        cout << "Jogador::update called" << endl;
        cout << "New X: " << tanque->x() << endl;
        cout << "New Y: " << tanque->y() << endl;
        m_x = tanque->x();
        m_y = tanque->y();
    }
}
