#ifndef ITERATOR_H
#define ITERATOR_H

class Component;

class Iterator
{
public:
    Iterator(Component *component);
    void first();
    void next();
    bool hasNext() const;
    Component *current() const;

private:
    Component *m_component;
    unsigned int m_top;
};

#endif // ITERATOR_H
