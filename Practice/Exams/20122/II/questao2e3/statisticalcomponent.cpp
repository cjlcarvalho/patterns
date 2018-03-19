#include "statisticalcomponent.h"
#include "item.h"

#include <iostream>

using namespace std;

StatisticalComponent::StatisticalComponent(Item *item) :
    ItemDecorator(item)
{

}

void StatisticalComponent::clean()
{
    ItemDecorator::clean();

    restartStatisticalComponent();
}

void StatisticalComponent::restartStatisticalComponent()
{
    cout << "Restarting statistical component" << endl;
}
