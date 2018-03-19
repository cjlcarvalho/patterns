#ifndef ISOCIALNETWORK_H
#define ISOCIALNETWORK_H

#include <string>

using namespace std;

class ISocialNetwork
{
public:
    virtual void postMessage(string authenticationKey, string message) = 0;
};

#endif // ISOCIALNETWORK_H
