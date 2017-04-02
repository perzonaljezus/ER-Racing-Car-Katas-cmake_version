
#ifndef TYREPRESSURE_TYREPRESSURESENSORNORMALTYRE_HPP
#define TYREPRESSURE_TYREPRESSURESENSORNORMALTYRE_HPP

#include "legacy/Sensor.hpp"
#include "ISensor.hpp"

class TyrepressureSensorNormalTyre : public Sensor, public ISensor {
public:
    TyrepressureSensorNormalTyre();
    virtual ~TyrepressureSensorNormalTyre() {}

};


#endif //TYREPRESSURE_TYREPRESSURESENSORNORMALTYRE_HPP
