#include "myfactory.h"
#include "iprototype.h"

MyFactory *MyFactory::m_instance = nullptr;

MyFactory::MyFactory()
{

}

MyFactory *MyFactory::instance()
{
    if (!m_instance)
        m_instance = new MyFactory;
    return m_instance;
}

bool MyFactory::addPrototype(string name, IPrototype *prototype, unsigned int quantity)
{
    if (!m_prototype.count(name)) {
        m_prototype[name] = prototype;
        m_counts[name] = 0;
        m_quantities[name] = quantity;
        return true;
    }
    return false;
}

IPrototype *MyFactory::create(string name)
{
    if (m_prototype.count(name)) {
        if (m_counts[name] < m_quantities[name])
            m_prototypes[name].push_back(m_prototype[name]->clone());
        return m_prototypes[name][m_counts[name]++ % m_quantities[name]];
    }
    return nullptr;
}
