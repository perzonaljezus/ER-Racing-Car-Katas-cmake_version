#include "Alarm.hpp"
#include <gmock/gmock.h>

using namespace ::testing;

TEST(Alarm, Foobar)
{
    Alarm *alarm = new Alarm();
    alarm->check();
    ASSERT_EQ(true, alarm->isAlarmOn());
}