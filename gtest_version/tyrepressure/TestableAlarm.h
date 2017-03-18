//
// Created by Eduard Ruffert on 18/03/2017.
//

#ifndef TYREPRESSURE_TESTABLEALARM_H
#define TYREPRESSURE_TESTABLEALARM_H


#include "Alarm.hpp"

class TestableAlarm : protected Alarm {

protected:
    double pressureValue();

};


#endif //TYREPRESSURE_TESTABLEALARM_H
