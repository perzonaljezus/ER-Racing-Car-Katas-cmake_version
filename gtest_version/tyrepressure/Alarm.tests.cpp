#include "Alarm.hpp"
#include "TestableAlarm.h"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double okPressure = (TestableAlarm::m_highPressureTreshold + TestableAlarm::m_lowPressureTreshold)/2;

    Sensor sensor = new Sensor();

    Alarm *alarm = (Alarm *) new TestableAlarm(sensor);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    Alarm *alarm = (Alarm *) new TestableAlarm( TestableAlarm::m_highPressureTreshold +1 );
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    Alarm *alarm = (Alarm *) new TestableAlarm( TestableAlarm::m_lowPressureTreshold -1 );
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}