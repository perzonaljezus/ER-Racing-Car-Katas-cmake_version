#include "../Alarm.hpp"
#include "AlarmBuilder.hpp"
#include "TyrepressureSensorNormalTyreStub.hpp"
#include "../lib/safetyRange/SafetyRangeNormalTyre.hpp"

using ::testing::Return;

TEST(Alarm, testAlarmNormalTyreIsOffWhenPressureIsOk)
{
    SafetyRangeNormalTyre safetyRange;
    double pressure = (safetyRange.getLowPressureTreshold() + safetyRange.getHighPressureTreshold() ) / 2. ;

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm* alarm = AlarmBuilder::anAlarm()->
            usingSensor(&sensor)->
            andWithSafetyRange(&safetyRange)->
            build();

    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}



TEST(Alarm, testAlarmNormalTyreIsOnWhenPressureIsTooHigh)
{
    SafetyRangeNormalTyre safetyRange;
    double pressure = safetyRange.getHighPressureTreshold() + 1;

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmNormalTyreIsOnWhenPressureIsTooLow)
{
    SafetyRangeNormalTyre safetyRange;
    double pressure = safetyRange.getLowPressureTreshold() - 1;

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmNormalTyreIsOffWhenPressureIsOnHighLimit)
{
    SafetyRangeNormalTyre safetyRange;
    double pressure = safetyRange.getHighPressureTreshold();

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testAlarmNormalTyreIsOffWhenPressureIsOnLowLimit)
{
    SafetyRangeNormalTyre safetyRange;
    double pressure = safetyRange.getLowPressureTreshold();

    TyrepressureSensorNormalTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}
