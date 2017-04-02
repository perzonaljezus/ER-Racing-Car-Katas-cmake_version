
#include "Alarm.hpp"
#include "lib/sensor/ISensor.hpp"
#include "lib/sensor/TyrepressureSensorWetTyre.hpp"
#include "lib/safetyRange/SafetyRangeWetTyre.hpp"


Alarm::Alarm(ISensor *sensor, SafetyRange *safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange), m_alarmOn(false)
{}

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (!isInRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

bool Alarm::isInRange(double pressureValue) const {
    return m_safetyRange->getLowPressureTreshold() <= pressureValue
           && pressureValue <= m_safetyRange->getHighPressureTreshold();
}

double Alarm::pressureValue()
{
    return m_sensor->probe();
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}

