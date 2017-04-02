#include "../Alarm.hpp"
#include "AlarmBuilderNormalTyre.hpp"
#include "TyrepressureSensorNormalTyreStub.hpp"

using ::testing::Return;

TEST(Alarm, testAlarmIsOffWhenPressureIsOk)
{
    double pressure = 19; // (high + low) 2

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    SafetyRangeNormalTyre safetyRange(17., 21.);

    Alarm* alarm = AlarmBuilderNormalTyre::anAlarm()->
            usingSensor(&sensor)->
            andWithSafetyRange(&safetyRange)->
            build();

    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}



TEST(Alarm, testAlarmIsOnWhenPressureIsTooHigh)
{
    double pressure = 22; // high+1

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    SafetyRangeNormalTyre safetyRange(17., 21.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOnWhenPressureIsTooLow)
{
    double pressure = 16; // low-1

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    SafetyRangeNormalTyre safetyRange(17., 21.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsOnHighLimit)
{
    double pressure = 21; // high

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    SafetyRangeNormalTyre safetyRange(17., 21.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmIsOffWhenPressureIsOnLowLimit)
{
    double pressure = 17; // low

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    SafetyRangeNormalTyre safetyRange(17., 21.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}
