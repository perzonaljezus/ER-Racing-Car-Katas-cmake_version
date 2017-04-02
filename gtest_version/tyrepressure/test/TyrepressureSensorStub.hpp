
#ifndef TYREPRESSURE_SENSORMOCK_HPP
#define TYREPRESSURE_SENSORMOCK_HPP

#include <gmock/gmock.h>

class TyrepressureSensorStub : public TyrepressureSensorNormalTyre
{
public:
    virtual ~TyrepressureSensorStub() {}

    MOCK_METHOD0(pressureValue, double());
};


#endif //TYREPRESSURE_SENSORMOCK_HPP
