//
// Created by Eduard Ruffert on 25/03/2017.
//

#ifndef TYREPRESSURE_FAKEALARM_H
#define TYREPRESSURE_FAKEALARM_H


#include "Alarm.hpp"

class FakeAlarm : public Alarm {
private:
    double pressure;

public:
    virtual ~FakeAlarm() {}

    FakeAlarm(double pressure) {
        this->pressure = pressure;
    }

    double pressureValue() override;
};

#endif //TYREPRESSURE_FAKEALARM_H
