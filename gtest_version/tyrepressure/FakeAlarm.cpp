//
// Created by Eduard Ruffert on 29/01/17.
//

#include "FakeAlarm.h"

FakeAlarm::FakeAlarm(double _pressure) {
     pressure = _pressure;
}

double FakeAlarm::probePressure() {
    return pressure;
}

