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
        lib/sensor/ISensor.hpp
        lib/sensor/TyrepressureSensorNormalTyre.cpp
        lib/sensor/TyrepressureSensorNormalTyre.hpp
        lib/sensor/TyrepressureSensorWetTyre.cpp
        lib/sensor/TyrepressureSensorWetTyre.hpp
        lib/safetyRange/SafetyRangeNormalTyre.cpp
        test/TyrepressureSensorNormalTyreStub.hpp
        test/TyrepressureSensorWetTyreStub.hpp
        lib/safetyRange/SafetyRangeNormalTyre.hpp
        lib/safetyRange/SafetyRangeWetTyre.cpp
        lib/safetyRange/SafetyRangeWetTyre.hpp
        test/AlarmBuilderNormalTyre.cpp
        test/AlarmBuilderNormalTyre.hpp
        test/AlarmBuilderWetTyre.cpp
        test/AlarmBuilderWetTyre.hpp
        )

add_executable(tyrepressure ${SOURCE_FILES})

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
target_link_libraries(tyrepressure gtest gtest_main gmock gmock_main)
