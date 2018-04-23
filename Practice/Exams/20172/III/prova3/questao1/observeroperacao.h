#ifndef OBSERVEROPERACAO_H
#define OBSERVEROPERACAO_H

#include "iobserver.h"

#include <string>

using namespace std;

class ISubject;

class ObserverOperacao : public IObserver
{
public:
    ObserverOperacao();
    void update(ISubject *s) override;

private:
    string m_state;
};

#endif // OBSERVEROPERACAO_H
