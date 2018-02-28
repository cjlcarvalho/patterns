#include "video1.h"
#include "icodec.h"

#include <iostream>

using namespace std;

Video1::Video1()
{

}

void Video1::play()
{
    if (codec())
        cout << "Video1 play with " << codec()->info() << " codec." << endl;
    else
        cout << "Video1 play without codec." << endl;
}
