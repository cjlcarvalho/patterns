#include "twittersn.h"

#include "Twitter4J/twitterfactory.h"
#include "Twitter4J/twitter.h"
#include "Twitter4J/status.h"

#include <string>

using namespace std;

TwitterSN::TwitterSN()
{

}

void TwitterSN::postMessage(string authenticationKey, string message)
{
    setOAuthConsumerKey(authenticationKey);
    TwitterFactory *tf = new TwitterFactory(build());

    Twitter *twitter = tf->getInstance();
    Status *status = twitter->updateStatus(message);
}
