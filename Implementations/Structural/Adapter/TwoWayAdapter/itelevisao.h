#ifndef ITELEVISAO_H
#define ITELEVISAO_H

#include <string>

class ITelevisao
{
public:
    virtual void apresentarProgramas(std::string nomePrograma) = 0;
};

#endif // ITELEVISAO_H
