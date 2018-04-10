#include "observeriterator.h"
#include "subject.h"
#include "basiciterator.h"

#include <iostream>

using namespace std;

void ObserverIterator::update(Subject *subject)
{
    BasicIterator *it = dynamic_cast<BasicIterator *>(subject);

    if (it) {
    	m_current = it->current();
	cout << "ObserverIterator: current update > " << m_current << endl;
    }
}
