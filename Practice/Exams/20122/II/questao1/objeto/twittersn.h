#ifndef TWITTERSN_H
#define TWITTERSN_H

#include "isocialnetwork.h"

#include <string>

using namespace std;

class ConfigurationBuilder;

class TwitterSN : public ISocialNetwork
{
public:
    TwitterSN(ConfigurationBuilder *configurationBuilder);
    void postMessage(string authenticationKey, string message) override;

private:
    ConfigurationBuilder *m_configurationBuilder;
};

#endif // TWITTERSN_H
