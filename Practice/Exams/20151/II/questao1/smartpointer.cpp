#include "smartpointer.h"
#include "pointer.h"

SmartPointer::SmartPointer(Pointer *pointer) :
    m_pointer(pointer)
{

}

SmartPointer::~SmartPointer()
{
    delete m_pointer;
}

Pointer *SmartPointer::operator->() const
{
    return m_pointer;
}
