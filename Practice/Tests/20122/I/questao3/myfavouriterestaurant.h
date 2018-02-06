#ifndef MYFAVOURITERESTAURANT_H
#define MYFAVOURITERESTAURANT_H

#include "restaurant.h"

class Chef;

class MyFavouriteRestaurant : public Restaurant
{
public:
    static MyFavouriteRestaurant *instance();
    Chef *createChef();

private:
    MyFavouriteRestaurant();
    static MyFavouriteRestaurant *m_instance;
};

#endif // MYFAVOURITERESTAURANT_H
