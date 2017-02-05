#include <gmock/gmock.h>
#include "SensorThatProbes.hpp"
#include "Alarm.hpp"

using namespace ::testing;

TEST(Alarm, alarmIsOnWhenPressureIsTooHigh) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getHighThreshold() + 1;
    TelemetryPressureSensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsTooLow) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getLowThreshold() - 1;
    TelemetryPressureSensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsOk) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getMeanThreshold(); // mean of range, should always be ok
    TelemetryPressureSensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}

