#ifndef TYREPRESSURE_SAFETYRANGEWETTYRE_HPP
#define TYREPRESSURE_SAFETYRANGEWETTYRE_HPP


class SafetyRangeWetTyre {

public:
    SafetyRangeWetTyre(double lowThreshold, double highThreshold);

    double getLowPressureTreshold() const;
    double getHighPressureTreshold() const;


protected:
    double m_lowPressureTreshold;
    double m_highPressureTreshold;
};


#endif //TYREPRESSURE_SAFETYRANGEWETTYRE_HPP
