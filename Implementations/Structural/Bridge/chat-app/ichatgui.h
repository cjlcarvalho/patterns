#ifndef ICHATGUI_H
#define ICHATGUI_H

class IChatGUI
{
public:
    virtual ~IChatGUI() = 0;
    virtual void load() = 0;
    virtual void build() = 0;
    virtual void show() = 0;
};

#endif // ICHATGUI_H
