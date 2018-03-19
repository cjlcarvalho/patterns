#include "post.h"

#include <iostream>

using namespace std;

Post::Post(const string &text) :
    m_text(text)
{

}

void Post::doOperation()
{
    cout << "POST: " << m_text << endl;
}

void Post::undoOperation()
{
    cout << "REMOVE POST: " << m_text << endl;
}

string Post::content() const
{
    return m_text;
}
