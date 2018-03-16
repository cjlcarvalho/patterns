#ifndef FACEBOOK_H
#define FACEBOOK_H

#include "isocialnetwork.h"

#include <string>

using namespace std;

class FacebookClient;

class Facebook : public ISocialNetwork
{
public:
    Facebook(FacebookClient *client);
    void publishOrder(string user, string orderMessage) override;

private:
    FacebookClient *m_client;
};

#endif // FACEBOOK_H
