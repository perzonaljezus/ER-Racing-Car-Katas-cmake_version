#include "Alarm.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, Foobar)
{
    Alarm *alarm = new Alarm();
    alarm->check();
    ASSERT_EQ(true, alarm->isAlarmOn());
}

// test alarm is off when pressure is ok
// test alarm is on when pressure is too high
// test alarm is on when pressure is too low
// test alarm is off when pressure on high limit
// test alarm is off when pressure on low limit