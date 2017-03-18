#include "Alarm.hpp"
#include "TestableAlarm.h"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    Alarm *alarm = (Alarm *) new TestableAlarm(20. );
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsTooHigh)
{
    Alarm *alarm = (Alarm *) new TestableAlarm(22. );
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}