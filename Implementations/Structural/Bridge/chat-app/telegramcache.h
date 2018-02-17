#ifndef TELEGRAMCACHE_H
#define TELEGRAMCACHE_H

#include <vector>
#include <string>

#include "icache.h"

class TelegramCache : public ICache
{
public:
    TelegramCache();
    void store(const std::string &message) override;
    void clear() override;
    std::vector<std::string> messages() const override;

private:
    void sendToCloud(const std::string &message);
    
private:
    std::vector<std::string> m_storedMessages;
};

#endif // TELEGRAMCACHE_H
