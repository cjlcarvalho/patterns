#ifndef POST_H
#define POST_H

#include "operation.h"

#include <string>

using namespace std;

class Post : public Operation
{
public:
    Post(const string &text);
    void doOperation() override;
    void undoOperation() override;
    string content() const override;

private:
    string m_text;
};

#endif // POST_H
