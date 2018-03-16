#include "resolutioncontroller.h"

#include <iostream>

using namespace std;

ResolutionController::ResolutionController(int height, int width, ResolutionController *next) :
    m_height(height),
    m_width(width),
    m_next(next)
{

}

void ResolutionController::show(int height, int width)
{
    if (canShow(height, width))
        cout << "ResolutionController " << m_height << " x " << m_width << " can show" << endl;
    else if (m_next)
        m_next->show(height, width);
    else
        cout << "There is no ResolutionController that can show this resolution" << endl;
}

bool ResolutionController::canShow(int height, int width) const
{
    return m_height >= height && m_width >= width;
}
