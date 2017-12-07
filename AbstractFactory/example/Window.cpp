class Window {
};

class PMWindow : Window public {
};

class MotifWindow : Window public {
};

class ScrollBar {
};

class PMScrollBar : ScrollBar public {
};

class MotifScrollBar : ScrollBar public {
};

class WidgetFactory {
public:
    virtual ScrollBar* CreateScrollBar() = 0;
    virtual Window* CreateWindow() = 0;
};

class PMWidgetFactory : WidgetFactory public {
public:
    ScrollBar* CreateScrollBar();
    Window* CreateWindow();
};

class MotifWidgetFactory : WidgetFactory public {
public:
    ScrollBar* CreateScrollBar();
    Window* CreateWindow();
};

ScrollBar* PMWidgetFactory::CreateScrollBar(){
    return new PMScrollBar;
}

Window* PMWidgetFactory::CreateWindow(){
    return new PMWindow;
}

ScrollBar* MotifWidgetFactory::CreateScrollBar(){
    return new MotifScrollBar;
}

Window* MotifWidgetFactory::CreateWindow(){
    return new MotifWindow;
}
