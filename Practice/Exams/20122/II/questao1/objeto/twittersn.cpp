#include "twittersn.h"
#include "Twitter4J/configurationbuilder.h"
#include "Twitter4J/twitterfactory.h"
#include "Twitter4J/twitter.h"
#include "Twitter4J/status.h"

TwitterSN::TwitterSN(ConfigurationBuilder *configurationBuilder) :
    m_configurationBuilder(configurationBuilder)
{

}

void TwitterSN::postMessage(string authenticationKey, string message)
{
    m_configurationBuilder->setOAuthConsumerKey(authenticationKey);

    TwitterFactory *tf = new TwitterFactory(m_configurationBuilder->build());

    Twitter *twitter = tf->getInstance();

    Status *status = twitter->updateStatus(message);
}
