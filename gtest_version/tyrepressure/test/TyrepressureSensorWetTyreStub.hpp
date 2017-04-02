
#ifndef TYREPRESSURE_SENSORWETTYREMOCK_HPP
#define TYREPRESSURE_SENSORWETTYREMOCK_HPP

#include <gmock/gmock.h>

class TyrepressureSensorWetTyreStub : public TyrepressureSensorNormalTyre
{
public:
    virtual ~TyrepressureSensorWetTyreStub() {}

    MOCK_METHOD0(pressureValue, double());
};


#endif //TYREPRESSURE_SENSORWETTYREMOCK_HPP
