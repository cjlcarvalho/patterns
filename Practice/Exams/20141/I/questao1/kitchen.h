#ifndef KITCHEN_H
#define KITCHEN_H

class Kitchen
{
public:
    Kitchen();
    ~Kitchen();
    bool registerFood(string name, IFood *food);
    IFood *createFood(string name);

private:
    map<string, IFood *> m_foods;
};

#endif // KITCHEN_H
