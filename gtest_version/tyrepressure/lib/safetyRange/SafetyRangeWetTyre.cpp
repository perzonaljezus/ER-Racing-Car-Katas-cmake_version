
#include "SafetyRangeWetTyre.hpp"

SafetyRangeWetTyre::SafetyRangeWetTyre(double lowThreshold, double highThreshold) : m_lowPressureTreshold(lowThreshold), m_highPressureTreshold(highThreshold)
{}

double SafetyRangeWetTyre::getLowPressureTreshold() const {
    return m_lowPressureTreshold;
}

double SafetyRangeWetTyre::getHighPressureTreshold() const {
    return m_highPressureTreshold;
}

