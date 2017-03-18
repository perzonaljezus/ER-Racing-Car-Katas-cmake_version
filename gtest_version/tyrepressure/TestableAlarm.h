//
// Created by Eduard Ruffert on 18/03/2017.
//

#ifndef TYREPRESSURE_TESTABLEALARM_H
#define TYREPRESSURE_TESTABLEALARM_H


#include "Alarm.hpp"

class TestableAlarm : public Alarm {

protected:
    double pressureValue();

public:
    TestableAlarm(double pressure);

    double pressure;
};


#endif //TYREPRESSURE_TESTABLEALARM_H
