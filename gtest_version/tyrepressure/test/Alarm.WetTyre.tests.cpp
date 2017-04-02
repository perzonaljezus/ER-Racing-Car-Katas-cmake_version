#include "../Alarm.hpp"
#include "TyrepressureSensorWetTyreStub.hpp"
#include "../lib/safetyRange/SafetyRangeWetTyre.hpp"
#include "AlarmBuilderWetTyre.hpp"

using ::testing::Return;

TEST(Alarm, testWetTyreAlarmIsOffWhenPressureIsOk)
{
    SafetyRangeWetTyre safetyRange;
    double pressure = (safetyRange.getLowPressureTreshold() + safetyRange.getHighPressureTreshold() ) / 2. ;

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));


    Alarm* alarm = AlarmBuilderWetTyre::anAlarm()->
            usingSensor(&sensor)->
            andWithSafetyRange(&safetyRange)->
            build();

    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}



TEST(Alarm, testWetTyreAlarmIsOnWhenPressureIsTooHigh)
{
    SafetyRangeWetTyre safetyRange;
    double pressure = safetyRange.getHighPressureTreshold() + 1;

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testWetTyreAlarmIsOnWhenPressureIsTooLow)
{
    SafetyRangeWetTyre safetyRange;
    double pressure = safetyRange.getLowPressureTreshold() - 1;

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testWetTyreAlarmIsOffWhenPressureIsOnHighLimit)
{
    SafetyRangeWetTyre safetyRange;
    double pressure = safetyRange.getHighPressureTreshold();

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testWetTyreAlarmIsOffWhenPressureIsOnLowLimit)
{
    SafetyRangeWetTyre safetyRange;
    double pressure = safetyRange.getLowPressureTreshold();

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, probe()) .WillOnce(Return(pressure));

    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}
