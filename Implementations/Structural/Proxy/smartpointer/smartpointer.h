#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class Pointer;

class SmartPointer
{
public:
    SmartPointer(Pointer *pointer);
    ~SmartPointer();
    Pointer *operator->() const;

private:
    Pointer *m_pointer;
};

#endif // SMARTPOINTER_H
