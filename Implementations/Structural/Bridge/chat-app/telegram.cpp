#include "iprotocol.h"
#include "ichatgui.h"
#include "icache.h"
#include "telegram.h"

Telegram::Telegram(IProtocol *protocol, IChatGUI *chatGui, ICache *cache) :
    IChatApp(protocol, chatGui, cache)
{

}

void Telegram::showGUI()
{
    gui()->load();
    gui()->build();
    gui()->show();
}

void Telegram::clearCache()
{
    cache()->clear();
}

void Telegram::sendMessage(const std::string &destination, const std::string &message)
{
    protocol()->connection(destination);
    protocol()->sendMessage(message);
    cache()->store(message);
}
