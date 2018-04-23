#ifndef ITERATOR_H
#define ITERATOR_H

#include "element.h"

#include <memory>

template <template <class, class> class T, typename Alloc = std::allocator<Element *> >
class Iterator
{
public:
    Iterator(const T<Element *, Alloc> &collection);
    void first();
    void next();
    Element *current() const;
    bool hasNext() const;
    void doVisit(Visitor *visitor);

private:
    T<Element *, Alloc> m_collection;
    unsigned int m_top;
};

template <template <class, class> class T, typename Alloc>
Iterator<T, Alloc>::Iterator(const T<Element *, Alloc> &collection) :
    m_collection(collection),
    m_top(0)
{
}

template <template <class, class> class T, typename Alloc>
void Iterator<T, Alloc>::first()
{
    m_top = 0;
}

template <template <class, class> class T, typename Alloc>
void Iterator<T, Alloc>::next()
{
    if (m_top < m_collection.size())
        m_top++;
}

template <template <class, class> class T, typename Alloc>
Element *Iterator<T, Alloc>::current() const
{
    if (m_top < m_collection.size())
        return m_collection[m_top];
    return nullptr;
}

template <template <class, class> class T, typename Alloc>
bool Iterator<T, Alloc>::hasNext() const
{
    return m_top < m_collection.size();
}

template <template <class, class> class T, typename Alloc>
void Iterator<T, Alloc>::doVisit(Visitor *visitor)
{
    for (first(); hasNext(); next())
        current()->accept(visitor);
    first();
}

#endif // ITERATOR_H
