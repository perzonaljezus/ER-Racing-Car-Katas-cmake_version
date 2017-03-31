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
TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    double pressure = 22; // high+1
    FakeAlarm *alarm = new FakeAlarm(pressure);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}
TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    double pressure = 16; // low-1
    FakeAlarm *alarm = new FakeAlarm(pressure);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}
TEST(Alarm, testAlarmIsOffWhenPressureIsOnHighLimit)
{
    double pressure = 21; // high
    FakeAlarm *alarm = new FakeAlarm(pressure);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsOnLowLimit)
{
    double pressure = 17; // low
    FakeAlarm *alarm = new FakeAlarm(pressure);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}
