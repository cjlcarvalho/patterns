#ifndef TWITTER4J_H
#define TWITTER4J_H

#include <string>

using namespace std;

class Twitter4J
{
public:
    Twitter4J();
    void postMessage(string message);
    void removePost(string message);
};

#endif // TWITTER4J_H
