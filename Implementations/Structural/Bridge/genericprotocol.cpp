#include <iostream>
#include <string>

#include "genericprotocol.h"

GenericProtocol::GenericProtocol()
{
}

GenericProtocol::~GenericProtocol()
{
}

void GenericProtocol::connection(const std::string &destination)
{
    m_destination = destination;
}

void GenericProtocol::sendMessage(const std::string &message)
{
    serverConfirmation(message);
    std::cout << "[GENERICPROTOCOL] Destination: " << m_destination << "\nMessage: " << message << std::endl;
}

void GenericProtocol::serverConfirmation(const std::string &message)
{
    std::cout << "SERVER CONFIRMATION: " << message << std::endl;
}
