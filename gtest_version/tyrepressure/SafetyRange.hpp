#ifndef TYREPRESSURE_SAFETYRANGE_HPP
#define TYREPRESSURE_SAFETYRANGE_HPP


class SafetyRange {

protected:
    double m_lowPressureTreshold;
public:
    double getLowPressureTreshold() const;

    double getHighPressureTreshold() const;

protected:
    double m_highPressureTreshold;
};


#endif //TYREPRESSURE_SAFETYRANGE_HPP
