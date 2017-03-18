#include "Alarm.hpp"
#include "TestableAlarm.h"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double okPressure = (TestableAlarm::m_highPressureTreshold + TestableAlarm::m_lowPressureTreshold)/2;

    Alarm *alarm = (Alarm *) new TestableAlarm(okPressure);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsTooHigh)
{
    Alarm *alarm = (Alarm *) new TestableAlarm( TestableAlarm::m_highPressureTreshold +1 );
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}