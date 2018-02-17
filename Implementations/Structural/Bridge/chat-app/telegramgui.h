#ifndef TELEGRAMGUI_H
#define TELEGRAMGUI_H

#include "ichatgui.h"

class TelegramGui : public IChatGUI
{
public:
    TelegramGui();
    void load() override;
    void build() override;
    void show() override;

private:
    void init();
    void prepareWindow();
};

#endif // TELEGRAMGUI_H
