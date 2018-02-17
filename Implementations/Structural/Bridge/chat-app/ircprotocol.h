#ifndef IRCPROTOCOL_H
#define IRCPROTOCOL_H

#include <string>

#include "iprotocol.h"

class IRCProtocol : public IProtocol
{
public:
    IRCProtocol();
    void connection(const std::string &destination) override;
    void sendMessage(const std::string &message) override;

private:
    std::string m_destination;
};

#endif // IRCPROTOCOL_H
