#include "blogcomponent.h"
#include "post.h"
#include "category.h"

int main()
{
    BlogComponent *myBlog = new Category;

    BlogComponent *books = new Category;
    
    BlogComponent *fightClub = new Post;
    BlogComponent *hobbit = new Post;

    books->addComponent(fightClub);
    books->addComponent(hobbit);

    myBlog->addComponent(books);

    myBlog->update();

    return 0;
}
