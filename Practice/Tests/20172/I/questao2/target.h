#ifndef TARGET_H
#define TARGET_H

#include <string>

using namespace std;

class Target
{
public:
    virtual bool play(string nomeDoArquivo, int velocidade) = 0;
};

#endif // TARGET_H
