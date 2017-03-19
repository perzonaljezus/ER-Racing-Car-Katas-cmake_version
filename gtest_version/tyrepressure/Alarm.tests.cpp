#include "Alarm.hpp"
#include "TirePressureSensorMock.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double pressure = (Alarm::m_highPressureTreshold + Alarm::m_lowPressureTreshold)/2;

    TirePressureSensorMock sensor;
    // define TirePressureSensorMock . popNextPressurePsiValue to return the predefined pressure
    EXPECT_CALL(sensor, popNextPressurePsiValue())
            .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    double pressure = Alarm::m_highPressureTreshold +1;

    TirePressureSensorMock sensor;
    EXPECT_CALL(sensor, popNextPressurePsiValue())
            .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    double pressure = Alarm::m_lowPressureTreshold -1;

    TirePressureSensorMock sensor;
    EXPECT_CALL(sensor, popNextPressurePsiValue())
            .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}