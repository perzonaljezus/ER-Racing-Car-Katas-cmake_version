#ifndef TYREPRESSURE_SAFETYRANGE_HPP
#define TYREPRESSURE_SAFETYRANGE_HPP


class SafetyRange {

public:
    SafetyRange(double lowThreshold, double highThreshold);

    double getLowPressureTreshold() const;
    double getHighPressureTreshold() const;


protected:
    double m_lowPressureTreshold;
    double m_highPressureTreshold;
};


#endif //TYREPRESSURE_SAFETYRANGE_HPP
