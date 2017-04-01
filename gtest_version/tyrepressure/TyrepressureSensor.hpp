
#ifndef TYREPRESSURE_TYREPRESSURESENSOR_HPP
#define TYREPRESSURE_TYREPRESSURESENSOR_HPP

#include "Sensor.hpp"

class TyrepressureSensor : public Sensor {
public:
    TyrepressureSensor();
    virtual ~TyrepressureSensor() {}

    virtual double pressureValue();
};


#endif //TYREPRESSURE_TYREPRESSURESENSOR_HPP
