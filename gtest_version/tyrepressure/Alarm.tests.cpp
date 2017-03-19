#include "Alarm.hpp"
#include "TirePressureSensorMock.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double pressure = (Alarm::m_highPressureTreshold + Alarm::m_lowPressureTreshold)/2;

    // define TirePressureSensorMock . popNextPressurePsiValue to return the predefined pressure

    TirePressureSensorMock* sensor = new TirePressureSensorMock(pressure);

    Alarm *alarm = new Alarm(sensor);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    double pressure = Alarm::m_highPressureTreshold +1;

    TirePressureSensorMock* sensor = new TirePressureSensorMock(pressure);

    Alarm *alarm = new Alarm(sensor);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    double pressure = Alarm::m_lowPressureTreshold -1;

    TirePressureSensorMock* sensor = new TirePressureSensorMock(pressure);

    Alarm *alarm = new Alarm(sensor);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}