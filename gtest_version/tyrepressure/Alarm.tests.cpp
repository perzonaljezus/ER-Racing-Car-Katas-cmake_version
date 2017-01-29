#include "Alarm.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, alarmIsOnWhenPressureIsTooHigh)
{
    int tooHightPressure = 22; // Alarm.highPressureThreshold+1
    Alarm *alarm = new Alarm(tooHightPressure);
    alarm->check();
    ASSERT_EQ(true, alarm->isAlarmOn());
}

// todo: alarm is on, when pressure is too low
// todo: alarm is off, when pressure is ok