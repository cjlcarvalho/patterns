#ifndef NTON_H
#define NTON_H

#include <vector>

using namespace std;

class Nton {
    public:
        static void initialize(int instances);
        static Nton* getInstance();
    private:
        Nton();
        static int _qtdInstances;
        static int _cntInstances;
        static vector<Nton*> _instances;
};

#endif // NTON_H
