#include "twitter4j.h"

#include <iostream>

using namespace std;

Twitter4J::Twitter4J()
{

}

void Twitter4J::postMessage(string message)
{
    cout << "Twitter4J postMessage: " << message << endl;
}

void Twitter4J::removePost(string message)
{
    cout << "Twitter4J removePost: " << message << endl;
}
