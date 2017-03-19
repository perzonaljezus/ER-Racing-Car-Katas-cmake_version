//
// Created by Eduard Ruffert on 19/03/2017.
//

#ifndef TYREPRESSURE_TIREPRESSURESENSORMOCK_H
#define TYREPRESSURE_TIREPRESSURESENSORMOCK_H


#include "TirePressureSensor.hpp"
#include "gmock/gmock.h"  // Brings in Google Mock.

class TirePressureSensorMock : public TirePressureSensor {

public:
    virtual ~TirePressureSensorMock() {}

    MOCK_METHOD0(popNextPressurePsiValue, double());
};


#endif //TYREPRESSURE_TIREPRESSURESENSORMOCK_H
