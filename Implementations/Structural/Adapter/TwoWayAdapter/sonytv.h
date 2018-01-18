#ifndef SONYTV_H
#define SONYTV_H

#include <string>

#include "itelevisao.h"

class SonyTV : public ITelevisao
{
public:
    SonyTV();
    void apresentarProgramas(std::string nomePrograma) override;
};

#endif // SONYTV_H
