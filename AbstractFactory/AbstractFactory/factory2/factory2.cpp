#include "factory2.h"
#include "../interfaces/iproduct1.h"
#include "../interfaces/iproduct2.h"
#include "product12.h"
#include "product22.h"

Factory2::Factory2(){

}

IProduct1* Factory2::createProduct1(){
	return new Product12;
}

IProduct2* Factory2::createProduct2(){
	return new Product22;
}
