#include "smartpointer.h"
#include "dumbpointer.h"

SmartPointer::SmartPointer(DumbPointer *pointer) :
    m_pointer(pointer)
{

}

SmartPointer::~SmartPointer()
{
    delete m_pointer;
}

DumbPointer *SmartPointer::operator->() const
{
    return m_pointer;
}
