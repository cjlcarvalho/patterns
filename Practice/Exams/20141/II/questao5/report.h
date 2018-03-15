#ifndef REPORT_H
#define REPORT_H

#include "component.h"

class Report : public Component
{
public:
    Report();
    void show() override;
};

#endif // REPORT_H
