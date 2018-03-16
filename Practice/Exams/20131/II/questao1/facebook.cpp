#include "facebook.h"
#include "facebookclient.h"
#include "facebooktype.h"

#include <iostream>
#include <vector>

using namespace std;

Facebook::Facebook(FacebookClient *client) :
    m_client(client)
{

}

void Facebook::publishOrder(string user, string orderMessage)
{
    vector<string> parameters({ "message", 
                                orderMessage }); 

    FacebookType *publishMessageResponse = m_client->publish(user + "/feed", parameters);

    cout << "Published message ID: " << publishMessageResponse->id() << endl;
}
