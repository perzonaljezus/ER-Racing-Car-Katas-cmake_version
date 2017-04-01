//
// Created by Eduard Ruffert on 31.03.17.
//

#ifndef TYREPRESSURE_SENSORMOCK_HPP
#define TYREPRESSURE_SENSORMOCK_HPP

#include <gmock/gmock.h>

class TyrepressureSensorStub : public TyrepressureSensor
{
public:
    virtual ~TyrepressureSensorStub() {}

    MOCK_METHOD0(pressureValue, double());
};


#endif //TYREPRESSURE_SENSORMOCK_HPP
