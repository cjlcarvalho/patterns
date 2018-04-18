#include "subject.h"
#include "observer.h"
#include "tanque.h"
#include "jogador.h"
#include "hardattack.h"
#include "softattack.h"

int main()
{
    Tanque *s = new Tanque(0, 0);

    s->setAttackStrategy(new HardAttack);

    s->attack();

    s->setAttackStrategy(new SoftAttack);

    s->attack();

    Observer *o = new Jogador;

    s->attach(o);

    s->setX(9);

    s->setY(8);

    return 0;
}
