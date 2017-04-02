cmake_minimum_required(VERSION 3.6)
project(tyrepressure)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        test/Alarm.NormalTyre.tests.cpp
        test/Alarm.WetTyre.tests.cpp
        Alarm.cpp
        Alarm.hpp
        lib/sensor/legacy/Sensor.cpp
        lib/sensor/legacy/Sensor.hpp
        test/TyrepressureSensorStub.hpp
        test/TyrepressureSensorWetTyreStub.hpp
        lib/sensor/TyrepressureSensor.cpp
        lib/sensor/TyrepressureSensor.hpp
        lib/sensor/TyrepressureSensorWetTyre.cpp
        lib/sensor/TyrepressureSensorWetTyre.hpp
        lib/safetyRange/SafetyRange.cpp
        lib/safetyRange/SafetyRange.hpp
        test/AlarmBuilder.cpp
        test/AlarmBuilder.hpp)

add_executable(tyrepressure ${SOURCE_FILES})

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
target_link_libraries(tyrepressure gtest gtest_main gmock gmock_main)
