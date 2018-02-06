#ifndef IBANKINFORMATION_H
#define IBANKINFORMATION_H

class IBankInformation
{
public:
    virtual ~IBankInformation();
    virtual IBankInformation *clone() = 0;
};

#endif // IBANKINFORMATION_H
