#include "instrument.h"
#include "isimulator.h"

ISimulator::~ISimulator()
{
    delete m_instrument;
}

Instrument *ISimulator::instrument() const
{
    return m_instrument;
}

void ISimulator::setInstrument(Instrument *instrument)
{
    m_instrument = instrument;
}
