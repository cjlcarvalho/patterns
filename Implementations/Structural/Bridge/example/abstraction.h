#ifndef ABSTRACTION_H
#define ABSTRACTION_H

class Implementor;

class Abstraction
{
public:
    Abstraction();
    void setImplementor(Implementor *implementor);
    void operation();

private:
    Implementor *m_implementor;
};

#endif // ABSTRACTION_H
