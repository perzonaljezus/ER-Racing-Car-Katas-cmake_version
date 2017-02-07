//
// Created by Eduard Ruffert on 29/01/17.
//


#ifndef TYREPRESSURE_SENSOR_H
#define TYREPRESSURE_SENSOR_H

#include "TelemetryPressureSensor.hpp"

class SensorThatProbes : public TelemetryPressureSensor {
public:
    SensorThatProbes(double _value) : value(_value) {}

    double probe() {
        return value;
    }

protected:
    double value;
};

#endif //TYREPRESSURE_SENSOR_H
