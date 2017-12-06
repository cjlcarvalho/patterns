#ifndef PRODUCT21_H
#define PRODUCT21_H

class Product21 : IProduct2 public {
	public:
		void sayHi();
};

void Product21::sayHi(){
	std::cout << "Product21" << std::endl;
}

#endif
