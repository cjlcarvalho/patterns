#include "myfavouriterestaurant.h"
#include "chef.h"
#include "favouritechef.h"

MyFavouriteRestaurant *MyFavouriteRestaurant::m_instance = nullptr;

MyFavouriteRestaurant::MyFavouriteRestaurant()
{

}

MyFavouriteRestaurant *MyFavouriteRestaurant::instance()
{
    if (!m_instance)
        m_instance = new MyFavouriteRestaurant;
    return m_instance;
}

Chef *MyFavouriteRestaurant::createChef()
{
    return new FavouriteChef;
}
