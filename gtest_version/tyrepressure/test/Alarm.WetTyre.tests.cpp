#include "../Alarm.hpp"
#include "TyrepressureSensorWetTyreStub.hpp"
#include "AlarmBuilder.hpp"
#include "../lib/safetyRange/SafetyRangeWetTyre.hpp"

using ::testing::Return;

TEST(Alarm, testWetTyreeAlarmIsOffWhenPressureIsOk)
{
    double pressure = 19; // (high + low) 2

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    SafetyRangeWetTyre safetyRange(15. , 25.);

    Alarm* alarm = AlarmBuilder::anAlarm()->
            usingSensor(&sensor)->
            andWithSafetyRange(&safetyRange)->
            build();

    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}



TEST(Alarm, testWetTyreeAlarmIsOnWhenPressureIsTooHigh)
{
    double pressure = 26. ; // high+1

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    SafetyRangeWetTyre safetyRange(15. , 25.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testWetTyreeAlarmIsOnWhenPressureIsTooLow)
{
    double pressure = 14. ; // low-1

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    SafetyRangeWetTyre safetyRange(15. , 25.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, testWetTyreeAlarmIsOffWhenPressureIsOnHighLimit)
{
    double pressure = 25. ; // high

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    SafetyRangeWetTyre safetyRange(15. , 25.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}

TEST(Alarm, testWetTyreeAlarmIsOffWhenPressureIsOnLowLimit)
{
    double pressure = 15. ; // low

    TyrepressureSensorWetTyreStub sensor;
    EXPECT_CALL(sensor, pressureValue()) .WillOnce(Return(pressure));

    SafetyRangeWetTyre safetyRange(15. , 25.);
    Alarm *alarm = new Alarm(&sensor, &safetyRange);
    alarm->check();
    EXPECT_FALSE(alarm->isAlarmOn());
}
