#include <iostream>
#include <vector>
#include "Nton.h"

using namespace std;

int Nton::_m = 0;
int Nton::_n = 0;
int Nton::_cont = 0;
vector<Nton*>* Nton::_instancias = new vector<Nton*>;

Nton::Nton(){
}

void Nton::initialize(int m, int n){
	Nton::_m = m;
	Nton::_n = n;
	Nton::_cont = 0;
	for(int i = 0; i<m; i++)
		Nton::_instancias->push_back(new Nton);
}

Nton* Nton::getInstance(){
	if(Nton::_cont < Nton::_n && Nton::_cont == Nton::_instancias->size()){
		std::cout << "Usou new para criar a " << Nton::_cont + 1 << " instancia" << std::endl;
		Nton::_instancias->push_back(new Nton);
	}
	std::cout << "Obtem a " << Nton::_cont % Nton::_n + 1 << " instancia" << std::endl;
	return (*Nton::_instancias)[Nton::_cont++ % Nton::_n];
}
