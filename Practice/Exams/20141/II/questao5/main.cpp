#include "component.h"
#include "report.h"
#include "footer.h"
#include "header.h"

int main()
{
    Component *component = new Header(new Footer(new Report));
    component->show();

    return 0;
}
