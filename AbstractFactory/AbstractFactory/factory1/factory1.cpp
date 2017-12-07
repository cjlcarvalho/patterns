#include "factory1.h"
#include "../interfaces/iproduct1.h"
#include "../interfaces/iproduct2.h"
#include "product11.h"
#include "product21.h"

Factory1::Factory1()
{

}

IProduct1* Factory1::createProduct1(){
    return new Product11;
}

IProduct2* Factory1::createProduct2(){
    return new Product21;
}
