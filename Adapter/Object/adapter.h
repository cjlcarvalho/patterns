#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"

class Adaptee;

class Adapter : public Target
{
public:
    Adapter();
    void request();
    void setAdaptee(Adaptee *adaptee);

private:
    Adaptee *m_Adaptee;
};

#endif // ADAPTER_H
