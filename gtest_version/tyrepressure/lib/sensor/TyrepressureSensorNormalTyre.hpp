
#ifndef TYREPRESSURE_TYREPRESSURESENSORNORMALTYRE_HPP
#define TYREPRESSURE_TYREPRESSURESENSORNORMALTYRE_HPP

#include "legacy/Sensor.hpp"

class TyrepressureSensorNormalTyre : public Sensor {
public:
    TyrepressureSensorNormalTyre();
    virtual ~TyrepressureSensorNormalTyre() {}

    virtual double pressureValue();
};


#endif //TYREPRESSURE_TYREPRESSURESENSORNORMALTYRE_HPP
