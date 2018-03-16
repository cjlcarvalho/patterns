#ifndef RESOLUTIONCONTROLLER_H
#define RESOLUTIONCONTROLLER_H

class ResolutionController
{
public:
    ResolutionController(int height, int width, ResolutionController *next = nullptr);
    void show(int height, int width);

private:
    bool canShow(int height, int width) const;

private:
    int m_height;
    int m_width;
    ResolutionController *m_next;
};

#endif // RESOLUTIONCONTROLLER_H
