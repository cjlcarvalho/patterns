#include "resourceproxy.h"
#include "concreteresource.h"

#include <iostream>

using namespace std;

ResourceProxy::ResourceProxy(int userID) :
    m_userID(userID),
    m_resource(new ConcreteResource)
{

}

void ResourceProxy::doSomething()
{
    if (m_userID == 34)
        m_resource->doSomething();
    else
	cout << "Not authorized" << endl;
}
