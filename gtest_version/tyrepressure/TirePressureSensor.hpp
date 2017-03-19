//
// Created by Eduard Ruffert on 19/03/2017.
//

#ifndef TYREPRESSURE_TIREPRESSURESENSOR_H
#define TYREPRESSURE_TIREPRESSURESENSOR_H


#include "Sensor.hpp"

class TirePressureSensor : public Sensor {
public:
    virtual ~TirePressureSensor() {}

    virtual double popNextPressurePsiValue();
};


#endif //TYREPRESSURE_TIREPRESSURESENSOR_H
