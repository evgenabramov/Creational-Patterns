cmake_minimum_required(VERSION 2.8)
project(UnitCreation)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES main.cpp
        Archer/Archer.cpp
        Healer/Healer.cpp
        Warrior/Warrior.cpp
        Horseman/Horseman.cpp
        Infantry/Infantry.cpp
        Position/Position.cpp
        Factories/HumanFactory.cpp
        Factories/OrcFactory.cpp
        Hero/Hero.h Hero/Hero.cpp
        HeroBuilders/HumanHeroBuilder.cpp
        HeroBuilders/OrcHeroBuilder.cpp
        HeroBuilders/Director.cpp
        HeroBuilders/HeroBuilder.cpp

        testing/test.cpp)

set(HEADERS Warrior/Warrior.h
        Position/Position.h
        Archer/Archer.h
        Healer/Healer.h
        Horseman/Horseman.h
        Infantry/Infantry.h
        Factories/ArmyFactory.h
        Factories/HumanFactory.h
        Factories/OrcFactory.h
        HeroBuilders/HeroBuilder.h
        HeroBuilders/HumanHeroBuilder.h
        HeroBuilders/OrcHeroBuilder.h
        HeroBuilders/Director.h)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/googletest-framework/googletest)

set(GTEST_SOURCE_DIR "${CMAKE_CURRENT_LIST_DIR}/googletest-framework/googletest")
include_directories(${GTEST_SOURCE_DIR}/include ${GTEST_SOURCE_DIR})

add_executable(run_unit_tests ${SOURCES} ${HEADERS} testing/test.cpp)

target_link_libraries(run_unit_tests gtest gtest_main)

enable_testing()

add_test(run_unit_tests run_unit_tests)