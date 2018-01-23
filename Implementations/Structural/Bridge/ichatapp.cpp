#include "iprotocol.h"
#include "ichatgui.h"
#include "icache.h"
#include "ichatapp.h"

IChatApp::IChatApp(IProtocol *protocol, IChatGUI *chatGui, ICache *cache) :
    m_protocol(protocol),
    m_chatGui(chatGui),
    m_cache(cache)
{
    
}

IChatApp::~IChatApp()
{
    delete m_protocol;
    delete m_cache;
    delete m_chatGui;
}

void IChatApp::setProtocol(IProtocol *protocol)
{
    m_protocol = protocol;
}

void IChatApp::setGUI(IChatGUI *chatGui)
{
    m_chatGui = chatGui;
}

void IChatApp::setCache(ICache *cache)
{
    m_cache = cache;
}

IProtocol *IChatApp::protocol() const
{
    return m_protocol;
}

ICache *IChatApp::cache() const
{
    return m_cache;
}

IChatGUI *IChatApp::gui() const
{
    return m_chatGui;
}
