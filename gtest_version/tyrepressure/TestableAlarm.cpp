//
// Created by Eduard Ruffert on 18/03/2017.
//

#include "TestableAlarm.h"

double TestableAlarm::pressureValue() {
    return pressure ;
}

TestableAlarm::TestableAlarm(double pressure) : Alarm() {
    this->pressure = pressure;

}
