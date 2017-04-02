
#include "SafetyRangeNormalTyre.hpp"

SafetyRangeNormalTyre::SafetyRangeNormalTyre(double lowThreshold, double highThreshold) : m_lowPressureTreshold(lowThreshold), m_highPressureTreshold(highThreshold)
{}

double SafetyRangeNormalTyre::getLowPressureTreshold() const {
    return m_lowPressureTreshold;
}

double SafetyRangeNormalTyre::getHighPressureTreshold() const {
    return m_highPressureTreshold;
}

