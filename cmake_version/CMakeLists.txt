cmake_minimum_required(VERSION 3.6)
project(cmake_version)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Source/LeaderBoard/include/Driver.h
        Source/LeaderBoard/include/LeaderBoard.h
        Source/LeaderBoard/include/Race.h
        Source/LeaderBoard/include/SelfDrivingCar.h
        Source/LeaderBoard/source/Driver.cpp
        Source/LeaderBoard/source/LeaderBoard.cpp
        Source/LeaderBoard/source/Race.cpp
        Source/LeaderBoard/source/SelfDrivingCar.cpp
        Source/LeaderBoard.Test/include/TestData.h
        Source/LeaderBoard.Test/source/LeaderBoardTest.cpp
        Source/LeaderBoard.Test/source/main.cpp
        Source/LeaderBoard.Test/source/RaceTest.cpp
        Source/LeaderBoard.Test/source/TestData.cpp
        Source/TelemetrySystem/include/TelemetryClient.h
        Source/TelemetrySystem/include/TelemetryDiagnosticControls.h
        Source/TelemetrySystem/source/TelemetryClient.cpp
        Source/TelemetrySystem/source/TelemetryDiagnosticControls.cpp
        Source/TelemetrySystem.Test/source/main.cpp
        Source/TelemetrySystem.Test/source/TelemetryDiagnosticControlsTest.cpp
        Source/TextConverter/include/HtmlPagesConverter.h
        Source/TextConverter/include/HtmlTextConverter.h
        Source/TextConverter/include/StringEscapeUtils.h
        Source/TextConverter/source/HtmlPagesConverter.cpp
        Source/TextConverter/source/HtmlTextConverter.cpp
        Source/TextConverter.Test/source/HtmlPagesConverterTest.cpp
        Source/TextConverter.Test/source/HtmlTextConverterTest.cpp
        Source/TextConverter.Test/source/main.cpp
        Source/TirePressureMonitoring/include/Alarm.h
        Source/TirePressureMonitoring/include/Sensor.h
        Source/TirePressureMonitoring/source/Alarm.cpp
        Source/TirePressureMonitoring/source/Sensor.cpp
        Source/TirePressureMonitoring.Test/source/AlarmTest.cpp
        Source/TirePressureMonitoring.Test/source/main.cpp
        Source/TurnTicketDispenser/include/TicketDispenser.h
        Source/TurnTicketDispenser/include/TurnNumberSequence.h
        Source/TurnTicketDispenser/include/TurnTicket.h
        Source/TurnTicketDispenser/source/TicketDispenser.cpp
        Source/TurnTicketDispenser/source/TurnNumberSequence.cpp
        Source/TurnTicketDispenser/source/TurnTicket.cpp
        Source/TurnTicketDispenser.Test/source/main.cpp
        Source/TurnTicketDispenser.Test/source/TurnTicketDispenserTest.cpp)

add_executable(cmake_version ${SOURCE_FILES})