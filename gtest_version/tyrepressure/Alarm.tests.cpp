#include "Alarm.hpp"
#include "TestableAlarm.h"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    Alarm *alarm = (Alarm *) new TestableAlarm();
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}