
#include "Alarm.hpp"

Alarm::Alarm() : m_sensor(),  m_alarmOn(false)
{}

double Alarm::m_lowPressureTreshold = 17. ;
double Alarm::m_highPressureTreshold = 21. ;

void Alarm::check()
{
    double psiPressureValue = pressureValue();

    if (psiPressureValue < m_lowPressureTreshold || m_highPressureTreshold < psiPressureValue)
    {
        m_alarmOn = true;
    }
}

double Alarm::pressureValue()  {
    double psiPressureValue = probeValue();
    return psiPressureValue;
}

double Alarm::probeValue() {
    double psiPressureValue = m_sensor.popNextPressurePsiValue();
    return psiPressureValue;
}

bool Alarm::isAlarmOn()
{
    return m_alarmOn;
}
