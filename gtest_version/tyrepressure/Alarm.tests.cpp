#include "Alarm.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double okPressure = (Alarm::m_highPressureTreshold + Alarm::m_lowPressureTreshold)/2;

    TirePressureSensor* sensor = new TirePressureSensor(okPressure);

    Alarm *alarm = (Alarm *) new Alarm(sensor);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    TirePressureSensor* sensor = new TirePressureSensor(Alarm::m_highPressureTreshold+1);

    Alarm *alarm = (Alarm *) new Alarm( sensor );
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    TirePressureSensor* sensor = new TirePressureSensor(Alarm::m_lowPressureTreshold-1);

    Alarm *alarm = (Alarm *) new Alarm( sensor );
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}