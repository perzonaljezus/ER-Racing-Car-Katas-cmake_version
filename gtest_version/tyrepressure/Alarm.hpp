#ifndef TYREPRESSURE_ALARM_H
#define TYREPRESSURE_ALARM_H

#ifndef TYREPRESSURE_SENSOR_H
#define TYREPRESSURE_SENSOR_H
#include "Sensor.hpp"
#endif //TYREPRESSURE_SENSOR_H

class Alarm
{
public:
    Alarm(Sensor *sensor);

    void check();
    bool isAlarmOn();

protected:
    Sensor *m_sensor;
    bool m_alarmOn;
    double m_lowPressureTreshold;
    double m_highPressureTreshold;

    double probePressure();

    bool isInSafetyRange(double psiPressureValue) const;
};

#endif