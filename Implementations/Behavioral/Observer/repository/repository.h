#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "subject.h"

#include <string>

using namespace std;

class Repository : public Subject
{
public:
    Repository(string state);
    void changeState(string s);
    string state() const;

private:
    string m_state;
};

#endif // REPOSITORY_H
