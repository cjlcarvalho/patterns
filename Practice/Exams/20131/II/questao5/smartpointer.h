#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class DumbPointer;

class SmartPointer
{
public:
    SmartPointer(DumbPointer *pointer);
    ~SmartPointer();
    DumbPointer *operator->() const;

private:
    DumbPointer *m_pointer;
};

#endif // SMARTPOINTER_H
