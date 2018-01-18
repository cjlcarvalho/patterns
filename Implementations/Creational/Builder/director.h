#ifndef DIRECTOR_H
#define DIRECTOR_H

#include <vector>

class Builder;

class Product;

class Director
{
public:
    Director();
    void addBuilder(Builder *builder);
    void construct() const;
    std::vector<Product *> products() const;

private:
    std::vector<Builder *> m_builders;
};

#endif // DIRECTOR_H
