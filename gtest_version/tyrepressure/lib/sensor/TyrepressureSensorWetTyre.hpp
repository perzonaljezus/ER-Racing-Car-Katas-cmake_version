
#ifndef TYREPRESSURE_TYREPRESSURESENSORWETTYRE_HPP
#define TYREPRESSURE_TYREPRESSURESENSORWETTYRE_HPP

#include "../sensor/legacy/Sensor.hpp"

class TyrepressureSensorWetTyre : public Sensor {
public:
    TyrepressureSensorWetTyre();
    virtual ~TyrepressureSensorWetTyre() {}

    virtual double pressureValue();
};


#endif //TYREPRESSURE_TYREPRESSURESENSORWETTYRE_HPP
