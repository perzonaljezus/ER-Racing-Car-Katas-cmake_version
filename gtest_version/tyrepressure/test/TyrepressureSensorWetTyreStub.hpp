
#ifndef TYREPRESSURE_SENSORWETTYREMOCK_HPP
#define TYREPRESSURE_SENSORWETTYREMOCK_HPP

#include <gmock/gmock.h>
#include "../lib/sensor/TyrepressureSensorWetTyre.hpp"

class TyrepressureSensorWetTyreStub : public TyrepressureSensorWetTyre
{
public:
    virtual ~TyrepressureSensorWetTyreStub() {}

    MOCK_METHOD0(probe, double());
};


#endif //TYREPRESSURE_SENSORWETTYREMOCK_HPP
