#ifndef ITERATOR_H
#define ITERATOR_H

#include <memory>

template<template<class, typename> class Container, class T, typename _Alloc = std::allocator<T>>
class Iterator
{
public:
    Iterator(const Container<T, _Alloc> &container);
    void begin();
    void next();
    bool hasNext() const;
    const T *current() const;

private:
    Container<T, _Alloc> m_container;
    unsigned int m_top;
};

template<template<class, typename> class Container, class T, typename _Alloc>
Iterator<Container, T, _Alloc>::Iterator(const Container<T, _Alloc> &container) :
    m_container(container),
    m_top(0)
{
}

template<template<class, typename> class Container, class T, typename _Alloc>
void Iterator<Container, T, _Alloc>::begin()
{
    m_top = 0;
}

template<template<class, typename> class Container, class T, typename _Alloc>
void Iterator<Container, T, _Alloc>::next()
{
    if (hasNext())
        m_top++;
}

template<template<class, typename> class Container, class T, typename _Alloc>
bool Iterator<Container, T, _Alloc>::hasNext() const
{
    return m_top < m_container.size();
}

template<template<class, typename> class Container, class T, typename _Alloc>
const T *Iterator<Container, T, _Alloc>::current() const
{
    if (m_top < m_container.size())
        return &m_container[m_top];
    return nullptr;
}

#endif // ITERATOR_H
