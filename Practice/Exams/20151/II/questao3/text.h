#ifndef TEXT_H
#define TEXT_H

#include <string>

using namespace std;

class Text
{
public:
    Text(const string &content);
    void add(const string &substring);
    void remove(const string &substring);
    void show();

private:
    string m_content;
};

#endif // TEXT_H
