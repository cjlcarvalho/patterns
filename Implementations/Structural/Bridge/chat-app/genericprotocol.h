#ifndef GENERICPROTOCOL_H
#define GENERICPROTOCOL_H

#include "iprotocol.h"

class GenericProtocol : public IProtocol
{
public:
    GenericProtocol();
    ~GenericProtocol();
    void connection(const std::string &destination);
    void sendMessage(const std::string &message);

protected:
    void serverConfirmation(const std::string &message);
    
private:
    std::string m_destination;
};

#endif // GENERICPROTOCOL_H
