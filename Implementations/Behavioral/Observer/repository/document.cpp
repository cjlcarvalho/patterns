#include "document.h"
#include "compressor.h"
#include "subject.h"
#include "repository.h"

#include <iostream>

using namespace std;

Document::Document(Compressor *c, string state) :
    m_compressor(c),
    m_state(state)
{
}

void Document::update(Subject *s)
{
    Repository *r = dynamic_cast<Repository *>(s);

    if (r) {
        cout << "Changing Document state to " << r->state() << endl;
        
        m_state = r->state();

        if (m_state == "PUSH" && m_compressor) {
            cout << "Applying compress algorithm before push" << endl;

            m_compressor->compress(this);
        }
    }
}

void Document::setCompressor(Compressor *c)
{
    m_compressor = c;
}

string Document::state() const
{
    return m_state;
}
