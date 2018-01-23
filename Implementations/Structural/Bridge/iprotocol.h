#ifndef IPROTOCOL_H
#define IPROTOCOL_H

#include <string>

class IProtocol
{
public:
    virtual ~IProtocol() = 0;
    virtual void connection(const std::string &destination) = 0;
    virtual void sendMessage(const std::string &message) = 0;
};

#endif // IPROTOCOL_H
