
#include "SafetyRange.hpp"

SafetyRange::SafetyRange(double lowThreshold, double highThreshold) : m_lowPressureTreshold(lowThreshold), m_highPressureTreshold(highThreshold)
{}

double SafetyRange::getLowPressureTreshold() const {
    return m_lowPressureTreshold;
}

double SafetyRange::getHighPressureTreshold() const {
    return m_highPressureTreshold;
}

