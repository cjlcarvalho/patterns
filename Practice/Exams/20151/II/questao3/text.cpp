#include "text.h"

#include <iostream>

using namespace std;

Text::Text(const string &content) : 
    m_content(content)
{

}

void Text::add(const string &substring)
{
    m_content.append(substring);
}

void Text::remove(const string &substring)
{
    m_content.erase(m_content.begin() + (m_content.size() - substring.size()), m_content.end());
}

void Text::show()
{
    cout << m_content << endl;
}
