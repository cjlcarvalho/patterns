#include <iostream>

#include "telegramgui.h"

TelegramGui::TelegramGui()
{
}

void TelegramGui::load()
{
    init();
}

void TelegramGui::build()
{
    std::cout << "Building TelegramGui" << std::endl;
    
    prepareWindow();
}

void TelegramGui::show()
{
    std::cout << "Showing TelegramGui" << std::endl;
}

void TelegramGui::init()
{
    std::cout << "Initializing TelegramGui" << std::endl;
}

void TelegramGui::prepareWindow()
{
    std::cout << "Preparing TelegramGui window" << std::endl;
}
