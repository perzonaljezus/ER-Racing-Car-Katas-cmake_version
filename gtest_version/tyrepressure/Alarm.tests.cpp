#include <gmock/gmock.h>
#include "Alarm.hpp"
#include "FakeAlarm.h"

using namespace ::testing;

TEST(Alarm, alarmIsOnWhenPressureIsTooHigh)
{
    double tooHighPressure = MAX_TYRE_PRESSURE+1;
    FakeAlarm *alarm = new FakeAlarm(tooHighPressure);
    alarm->check();
    ASSERT_EQ(true, alarm->isAlarmOn());
}

// todo: alarm is on, when pressure is too low
// todo: alarm is off, when pressure is ok