#ifndef ADAPTER_H
#define ADAPTER_H

#include "target.h"

class Adaptee;

class Adapter : public Target
{
public:
    Adapter();
    void request() override;
    void setAdaptee(Adaptee *adaptee) override;

private:
    Adaptee *m_Adaptee;
};

#endif // ADAPTER_H
