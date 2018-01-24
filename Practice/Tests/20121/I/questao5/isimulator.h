#ifndef ISIMULATOR_H
#define ISIMULATOR_H

class Instrument;

class ISimulator
{
public:
    ~ISimulator();
    Instrument *instrument() const;
    void setInstrument(Instrument *instrument);

public:
    virtual void playInstrument() = 0;

private:
    Instrument *m_instrument;
};

#endif // ISIMULATOR_H
