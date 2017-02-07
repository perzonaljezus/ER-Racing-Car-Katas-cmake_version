#include <gmock/gmock.h>
#include "SensorThatProbes.hpp"
#include "Alarm.hpp"
#include "AlarmBuilder.hpp"

using namespace ::testing;


TEST(Alarm, alarmIsOnWhenPressureIsTooHigh) {
    SafetyRange *safetyRange = new SafetyRange();

    double testPressure = safetyRange->getHighThreshold() + 1;
    ISensor *sensor = new SensorThatProbes(testPressure);

    Alarm *alarm = AlarmBuilder::anAlarm()->
            usingSensor(sensor)->
            andWithSafetyRange(safetyRange)->
            build();

    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsTooLow) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getLowThreshold() - 1;
    ISensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsOk) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getMeanThreshold(); // mean of range, should always be ok
    ISensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

