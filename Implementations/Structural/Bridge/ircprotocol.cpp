#include <iostream>
#include <string>

#include "ircprotocol.h"

IRCProtocol::IRCProtocol()
{
    
}

void IRCProtocol::connection(const std::string &destination)
{
    m_destination = destination;
}

void IRCProtocol::sendMessage(const std::string &message)
{
    if (!m_destination.empty())
        std::cout << "[IRCProtocol] Destination: " << m_destination << "\nMessage: " << message << std::endl; 
}
