//
// Created by Eduard Ruffert on 07/02/17.
//

#ifndef TYREPRESSURE_ALARMBUILDER_H
#define TYREPRESSURE_ALARMBUILDER_H


#include "Alarm.hpp"

class AlarmBuilder {
public:
    static AlarmBuilder *anAlarm() {
        return new AlarmBuilder();
    }

    AlarmBuilder *usingSensor(ISensor *sensor) {
        this->sensor = sensor;
        return this;
    }

    AlarmBuilder *andWithSafetyRange(SafetyRange *safetyRange) {
        this->safetyRange = safetyRange;
        return this;
    }

    Alarm *build() {
        return new Alarm(sensor, safetyRange);
    }

protected:
    ISensor *sensor;
    SafetyRange *safetyRange;
};


#endif //TYREPRESSURE_ALARMBUILDER_H
