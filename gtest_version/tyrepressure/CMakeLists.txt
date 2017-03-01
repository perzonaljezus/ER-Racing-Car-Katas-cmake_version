cmake_minimum_required(VERSION 3.6)
project(tyrepressure)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Alarm.tests.cpp
        Alarm.cpp
        Alarm.hpp
        Sensor.cpp
        Sensor.hpp
        SensorThatProbes.cpp
        SensorThatProbes.hpp
        SafetyRange.cpp
        SafetyRange.hpp
        TelemetryPressureSensor.cpp
        TelemetryPressureSensor.hpp
        ISensor.cpp
        ISensor.hpp
        AlarmBuilder.cpp
        AlarmBuilder.hpp)

add_executable(tyrepressure ${SOURCE_FILES})

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
target_link_libraries(tyrepressure gtest gtest_main)
