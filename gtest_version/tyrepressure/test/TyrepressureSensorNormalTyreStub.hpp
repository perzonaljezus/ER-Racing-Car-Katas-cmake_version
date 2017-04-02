
#ifndef TYREPRESSURE_SENSORMOCK_HPP
#define TYREPRESSURE_SENSORMOCK_HPP

#include <gmock/gmock.h>
#include "../lib/sensor/ISensor.hpp"
#include "../lib/sensor/TyrepressureSensorNormalTyre.hpp"

class TyrepressureSensorNormalTyreStub : public TyrepressureSensorNormalTyre
{
public:
    virtual ~TyrepressureSensorNormalTyreStub() {}

    MOCK_METHOD0(probe, double());
};


#endif //TYREPRESSURE_SENSORMOCK_HPP
