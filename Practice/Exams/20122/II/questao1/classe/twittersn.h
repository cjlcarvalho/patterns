#ifndef TWITTERSN_H
#define TWITTERSN_H

#include <string>

#include "isocialnetwork.h"
#include "Twitter4J/configurationbuilder.h"

using namespace std;

class TwitterSN : public ISocialNetwork, public ConfigurationBuilder
{
public:
    TwitterSN();
    void postMessage(string authenticationKey, string message) override;
};

#endif // TWITTERSN_H
