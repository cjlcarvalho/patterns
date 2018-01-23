#ifndef TELEGRAM_H
#define TELEGRAM_H

#include <string>

#include "ichatapp.h"

class IProtocol;
class IChatGUI;
class ICache;

class Telegram : public IChatApp
{
public:
    explicit Telegram(IProtocol *protocol = nullptr,
                      IChatGUI *chatGui = nullptr,
                      ICache *cache = nullptr);
    
    void showGUI() override;
    void clearCache() override;
    void sendMessage(const std::string &destination, const std::string &message) override;
};

#endif // TELEGRAM_H
