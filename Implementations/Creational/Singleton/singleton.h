#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton {
    private:
        Singleton();
        static Singleton* _instance;
    public:
        static Singleton* Instance();
        void doSomething();
};

#endif // SINGLETON_H
