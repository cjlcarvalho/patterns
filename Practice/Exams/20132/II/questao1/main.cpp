#include "component.h"
#include "clip.h"
#include "publicitybefore.h"
#include "publicityafter.h"

int main()
{
    Component *component = new PublicityAfter(new PublicityBefore(new Clip));
    component->play();

    return 0;
}
