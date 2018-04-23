#include "observeroperacao.h"
#include "isubject.h"
#include "ioperacao.h"

#include <iostream>

using namespace std;

ObserverOperacao::ObserverOperacao() :
    m_state(string())
{
}

void ObserverOperacao::update(ISubject *s)
{
    IOperacao *o = dynamic_cast<IOperacao *>(s);

    if (o) {
        cout << "Operacao mudou para " << o->state() << endl;
        m_state = o->state();
    }
}
