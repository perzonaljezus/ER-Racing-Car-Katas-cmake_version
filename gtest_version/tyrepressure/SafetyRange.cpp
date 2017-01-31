//
// Created by Eduard Ruffert on 31/01/17.
//

#include "Alarm.hpp"
#include "SafetyRange.hpp"

SafetyRange::SafetyRange()
{
    m_highPressureTreshold = 21. ;
    m_lowPressureTreshold = 17. ;
}

bool SafetyRange::isInSafetyRange(double psiPressureValue) const {
    return m_lowPressureTreshold <= psiPressureValue && psiPressureValue <= m_highPressureTreshold;
}

double SafetyRange::getMaxPressure() const {
    return m_highPressureTreshold;
}

double SafetyRange::getMinPressure() const {
    return m_lowPressureTreshold;
}
