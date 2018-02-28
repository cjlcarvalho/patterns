#include "video2.h"
#include "icodec.h"

#include <iostream>

using namespace std;

Video2::Video2()
{

}

void Video2::play()
{
    if (codec())
        cout << "Video2 play with " << codec()->info() << " codec." << endl;
    else
        cout << "Video2 play without codec." << endl;
}
