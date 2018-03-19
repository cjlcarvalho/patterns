#ifndef EASYFACADE_H
#define EASYFACADE_H

class ComplexAPI;

class EasyFacade
{
public:
    EasyFacade(ComplexAPI *complexObj);
    void doEasier();

private:
    ComplexAPI *m_complexObj;
};

#endif // EASYFACADE_H
