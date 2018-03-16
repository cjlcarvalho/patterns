#include "resolutioncontroller.h"

int main()
{
    ResolutionController *rc1280x1024 = new ResolutionController(1280, 1024);

    ResolutionController *rc1024x768 = new ResolutionController(1024, 768, rc1280x1024);

    ResolutionController *rc720x400 = new ResolutionController(720, 400, rc1024x768);

    rc720x400->show(300, 300);

    rc720x400->show(800, 500);

    rc720x400->show(1200, 800);

    rc720x400->show(1400, 1400);

    return 0;
}
