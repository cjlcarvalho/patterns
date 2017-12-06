#ifndef PRODUCT11_H
#define PRODUCT11_H

class Product11 : IProduct1 public {
	public:
		void talk();
};

void Product11::talk(){
	std::cout << "Product11" << std::endl; 
}

#endif
