#ifndef MARKETCOMPOSITE_H
#define MARKETCOMPOSITE_H

#include "component.h"

#include <vector>

class MarketComposite : public Component
{
public:
    MarketComposite();
    ~MarketComposite();
    void aumentarPreco(double valor) override;
    bool addChild(Component *child) override;
    bool removeChild(Component *child) override;
    void mostrar() const override;

private:
    std::vector<Component *> m_children;
};

#endif // MARKETCOMPOSITE_H
