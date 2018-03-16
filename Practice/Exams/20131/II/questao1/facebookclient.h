#ifndef FACEBOOKCLIENT_H
#define FACEBOOKCLIENT_H

#include <vector>

using namespace std;

class FacebookType;

class FacebookClient
{
public:
    virtual FacebookType *publish(string destination, vector<string> parameters) = 0;
};

#endif // FACEBOOKCLIENT_H
