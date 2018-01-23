#include <iostream>

#include "telegramcache.h"

TelegramCache::TelegramCache()
{
}

void TelegramCache::store(const std::string &message)
{
    m_storedMessages.push_back(message);
    sendToCloud(message);
}

void TelegramCache::clear()
{
    m_storedMessages.clear();
}

std::vector<std::string> TelegramCache::messages() const 
{
    return m_storedMessages;
}

void TelegramCache::sendToCloud(const std::string &message)
{
    std::cout << "Sending message to cloud" << std::endl;
}
