#include "file.h"

#include <iostream>

using namespace std;

File::File(const string &name) :
    m_name(name)
{

}

void File::clone()
{
    cout << "Clone " << m_name << endl;
}

void File::clean()
{
    cout << "Clean " << m_name << endl;
}
