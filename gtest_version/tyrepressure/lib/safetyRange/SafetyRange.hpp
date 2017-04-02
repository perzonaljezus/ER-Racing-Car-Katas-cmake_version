#ifndef TYREPRESSURE_SAFETYRANGE_HPP
#define TYREPRESSURE_SAFETYRANGE_HPP


class SafetyRange {

public:
    SafetyRange() {}

    double getLowPressureTreshold() const {
        return m_lowPressureTreshold;
    }

    double getHighPressureTreshold() const {
        return m_highPressureTreshold;
    }

protected:
    SafetyRange(double lowThreshold, double highThreshold) : m_lowPressureTreshold(lowThreshold), m_highPressureTreshold(highThreshold) {};
    double m_lowPressureTreshold;
    double m_highPressureTreshold;

};

#endif //TYREPRESSURE_SAFETYRANGE_HPP
