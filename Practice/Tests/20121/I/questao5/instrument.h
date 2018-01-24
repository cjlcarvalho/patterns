#ifndef INSTRUMENT_H
#define INSTRUMENT_H

class Instrument
{
public:
    virtual ~Instrument();
    virtual void build() = 0;
    virtual void play() = 0;
};

#endif // INSTRUMENT_H
