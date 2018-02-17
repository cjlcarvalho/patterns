#ifndef IPAYMENTCHANNEL_H
#define IPAYMENTCHANNEL_H

#include <string>

using namespace std;

class IPaymentChannel
{
public:
    virtual string channelLocation() = 0;
    virtual long channelId() = 0;
};

#endif // IPAYMENTCHANNEL_H
