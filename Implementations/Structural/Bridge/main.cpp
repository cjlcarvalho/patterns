#include <string>

#include "ichatapp.h"
#include "telegram.h"
#include "ircprotocol.h"
#include "telegramcache.h"
#include "telegramgui.h"
#include "genericprotocol.h"

int main()
{
    IProtocol *protocol = new IRCProtocol;
    ICache *cache = new TelegramCache;
    IChatGUI *gui = new TelegramGui;
    
    IChatApp *app = new Telegram(protocol, gui, cache);
    
    app->showGUI();
    app->sendMessage("Caio", "Olá");
    app->sendMessage("Caio", "Tudo bem?");
    
    app->clearCache();
    
    app->setProtocol(new GenericProtocol);
    
    app->sendMessage("Caio", "Testando...");
    
    app->clearCache();
    
    return 0;
}
