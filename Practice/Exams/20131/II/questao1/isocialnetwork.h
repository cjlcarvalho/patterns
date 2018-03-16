#ifndef ISOCIALNETWORK_H
#define ISOCIALNETWORK_H

#include <string>

using namespace std;

class ISocialNetwork
{
public:
    virtual void publishOrder(string user, string orderMessage) = 0;
};

#endif // ISOCIALNETWORK_H
