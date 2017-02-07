//
// Created by Eduard Ruffert on 05/02/17.
//

#ifndef TYREPRESSURE_TELEMETRYPRESSURESENSOR_H
#define TYREPRESSURE_TELEMETRYPRESSURESENSOR_H

#include "Sensor.hpp"
#include "ISensor.hpp"

class TelemetryPressureSensor : public Sensor, public ISensor {
public:
    double probe() {
        return Sensor::popNextPressurePsiValue();
    }

};


#endif //TYREPRESSURE_TELEMETRYPRESSURESENSOR_H
