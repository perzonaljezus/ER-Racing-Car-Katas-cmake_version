#include "Alarm.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    Alarm *alarm = new TestableAlarm();
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}