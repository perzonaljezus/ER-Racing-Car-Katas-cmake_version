//
// Created by Eduard Ruffert on 31/01/17.
//

#ifndef TYREPRESSURE_SAFETYRANGE_H
#define TYREPRESSURE_SAFETYRANGE_H

class SafetyRange {
public:
    SafetyRange();

    bool isInSafetyRange (double psiPressureValue) const;

    double getMaxPressure() const;
    double getMinPressure() const;

protected:
    double m_highPressureTreshold;
    double m_lowPressureTreshold;
};

#endif //TYREPRESSURE_SAFETYRANGE_H
