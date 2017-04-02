
#ifndef TYREPRESSURE_TYREPRESSURESENSORWETTYRE_HPP
#define TYREPRESSURE_TYREPRESSURESENSORWETTYRE_HPP

#include "ISensor.hpp"

class TyrepressureSensorWetTyre : public ISensor {
public:
    TyrepressureSensorWetTyre();
    virtual ~TyrepressureSensorWetTyre() {}

    virtual double probe();
};


#endif //TYREPRESSURE_TYREPRESSURESENSORWETTYRE_HPP
