#ifndef ICHATAPP_H
#define ICHATAPP_H

#include <string>

class IProtocol;
class IChatGUI;
class ICache;

class IChatApp
{
public:
    explicit IChatApp(IProtocol *protocol = nullptr, 
                      IChatGUI *chatGui = nullptr,
                      ICache *cache = nullptr);
    
    ~IChatApp();
    
    void setProtocol(IProtocol *protocol);
    void setGUI(IChatGUI *chatGui);
    void setCache(ICache *cache);
    
    IProtocol *protocol() const;
    IChatGUI *gui() const;
    ICache *cache() const;
    
    virtual void showGUI() = 0;
    virtual void clearCache() = 0;
    virtual void sendMessage(const std::string &destination, const std::string &message) = 0; 
    
private:
    IProtocol *m_protocol;
    IChatGUI  *m_chatGui;
    ICache    *m_cache;
};

#endif // ICHATAPP_H
