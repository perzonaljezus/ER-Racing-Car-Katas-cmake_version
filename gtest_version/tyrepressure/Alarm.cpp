
#include "Alarm.hpp"
#include "SafetyRange.hpp"

Alarm::Alarm(Sensor *sensor, SafetyRange *safetyRange) : m_sensor(sensor), m_safetyRange(safetyRange),  m_alarmOn(false)
{
    m_lowPressureTreshold = safetyRange->getMinPressure();
    m_highPressureTreshold = safetyRange->getMaxPressure();
}

void Alarm::check()
{
    double psiPressureValue = probePressure();

    if ( ! isInSafetyRange(psiPressureValue))
    {
        m_alarmOn = true;
    }
}

bool Alarm::isInSafetyRange(double psiPressureValue) const {
    return m_lowPressureTreshold <= psiPressureValue && psiPressureValue <= m_highPressureTreshold;
}

double Alarm::probePressure() { return m_sensor->popNextPressurePsiValue(); }

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
