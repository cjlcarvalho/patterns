#ifndef IPROTOTYPE_H
#define IPROTOTYPE_H

class IPrototype {
    public:
        virtual IPrototype* clone() = 0;
};

#endif // IPROTOTYPE_H
