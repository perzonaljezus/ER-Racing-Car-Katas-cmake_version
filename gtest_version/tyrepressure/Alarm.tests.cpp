#include "Alarm.hpp"
#include "TyrepressureSensorStub.hpp"

using ::testing::Return;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double pressure = 19; // (high + low) 2

    TyrepressureSensorStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    double pressure = 22; // high+1

    TyrepressureSensorStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    double pressure = 16; // low-1

    TyrepressureSensorStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsOnHighLimit)
{
    double pressure = 21; // high

    TyrepressureSensorStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsOnLowLimit)
{
    double pressure = 17; // low

    TyrepressureSensorStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}
