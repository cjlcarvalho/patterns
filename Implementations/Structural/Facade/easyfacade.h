#ifndef EASYFACADE_H
#define EASYFACADE_H

class ComplexAPI;

class EasyFacade
{
public:
    EasyFacade(ComplexAPI *instance);
    void buildOperation();
    void destructionOperation();

private:
    ComplexAPI *m_complexInstance;
};

#endif // EASYFACADE_H
