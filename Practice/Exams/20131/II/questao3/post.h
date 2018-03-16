#ifndef POST_H
#define POST_H

#include "blogcomponent.h"

class Post : public BlogComponent
{
public:
    Post();
    void update() override;
};

#endif // POST_H
