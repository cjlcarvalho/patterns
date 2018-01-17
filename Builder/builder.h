#ifndef BUILDER_H
#define BUILDER_H

class Product;

class Builder 
{
public:
    virtual void buildPart() = 0;
    virtual Product *getResult() const = 0;
};

#endif // BUILDER_H
