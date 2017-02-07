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
protected:
    ISensor *sensor;
};


#endif //TYREPRESSURE_ALARMBUILDER_H
