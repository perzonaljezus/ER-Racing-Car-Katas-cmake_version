#include <gmock/gmock.h>
#include "Alarm.hpp"
#include "SensorThatProbes.hpp"

using namespace ::testing;

TEST(Alarm, alarmIsOnWhenPressureIsTooHigh) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getMaxPressure() + 1;
    Sensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsTooLow) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = safetyRange->getMinPressure() - 1;
    Sensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsOk) {
    SafetyRange *safetyRange = new SafetyRange();
    double testPressure = (safetyRange->getMinPressure() + safetyRange->getMaxPressure()) / 2; // mean of range, should be ok
    Sensor *sensor = new SensorThatProbes(testPressure);
    Alarm *alarm = new Alarm(sensor, safetyRange);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}
