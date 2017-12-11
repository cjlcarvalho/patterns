#ifndef NTON_H
#define NTON_H

#include <vector>

using namespace std;

class Nton {
private:
	static int _m;
	static int _n;
	static int _cont;
	static vector<Nton*>* _instancias;
	Nton();
public:
	static void initialize(int, int);
	static Nton* getInstance();
};

#endif // NTON_H
