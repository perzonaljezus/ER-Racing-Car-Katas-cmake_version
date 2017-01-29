//
// Created by Eduard Ruffert on 29/01/17.
//

#ifndef TYREPRESSURE_FAKEALARM_H
#define TYREPRESSURE_FAKEALARM_H


#include "Alarm.hpp"

class FakeAlarm: public Alarm {

public:
    FakeAlarm(double pressure);
    double probePressure();

protected:
    double pressure;
};


#endif //TYREPRESSURE_FAKEALARM_H
