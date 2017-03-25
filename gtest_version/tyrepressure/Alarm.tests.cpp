#include "Alarm.hpp"
#include "FakeAlarm.h"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double pressure = 19; // (high + low) 2
    FakeAlarm *alarm = new FakeAlarm(pressure);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

// test alarm is on when pressure is too high
// test alarm is on when pressure is too low
// test alarm is off when pressure on high limit
// test alarm is off when pressure on low limit