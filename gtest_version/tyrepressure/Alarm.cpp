
#include "Alarm.hpp"


Alarm::Alarm(TyrepressureSensor *sensor, SafetyRangeNormalTyre* safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange), m_alarmOn(false)
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
    return m_sensor->pressureValue();
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}

