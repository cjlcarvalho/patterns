#ifndef ICACHE_H
#define ICACHE_H

#include <string>
#include <vector>

class ICache
{
public:
    virtual ~ICache() = 0;
    virtual void store(const std::string &message) = 0;
    virtual void clear() = 0;
    virtual std::vector<std::string> messages() const = 0;
};

#endif // ICACHE_H
