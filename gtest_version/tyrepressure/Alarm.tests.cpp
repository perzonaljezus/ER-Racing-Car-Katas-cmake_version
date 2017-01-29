#include <gmock/gmock.h>
#include "Alarm.hpp"
#include "MockSensor.hpp"

using namespace ::testing;

TEST(Alarm, alarmIsOnWhenPressureIsTooHigh) {
    double testPressure = MAX_TYRE_PRESSURE + 1;
    Sensor *sensor = new MockSensor(testPressure);
    Alarm *alarm = new Alarm(sensor);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsTooLow) {
    double testPressure = MIN_TYRE_PRESSURE - 1;
    Sensor *sensor = new MockSensor(testPressure);
    Alarm *alarm = new Alarm(sensor);
    alarm->check();
    ASSERT_TRUE(alarm->isAlarmOn());
}

TEST(Alarm, alarmIsOnWhenPressureIsOk) {
    double testPressure = (MIN_TYRE_PRESSURE + MAX_TYRE_PRESSURE) / 2; // mean of range, should be ok
    Sensor *sensor = new MockSensor(testPressure);
    Alarm *alarm = new Alarm(sensor);
    alarm->check();
    ASSERT_FALSE(alarm->isAlarmOn());
}
