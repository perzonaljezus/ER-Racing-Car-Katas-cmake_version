//
// Created by Eduard Ruffert on 29/01/17.
//

#ifndef TYREPRESSURE_MOCKSENSOR_H
#define TYREPRESSURE_MOCKSENSOR_H

#ifndef TYREPRESSURE_SENSOR_H
#define TYREPRESSURE_SENSOR_H

#include "Sensor.hpp"

#endif //TYREPRESSURE_SENSOR_H


class MockSensor : public Sensor {
public:
    MockSensor(double _value) : value(_value) {}

    double popNextPressurePsiValue() {
        return value;
    }

protected:
    double value;
};


#endif //TYREPRESSURE_MOCKSENSOR_H
