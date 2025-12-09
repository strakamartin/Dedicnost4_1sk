cmake_minimum_required(VERSION 4.0)
project(Dedicnost4_1sk)

set(CMAKE_CXX_STANDARD 14)

include_directories(Dedicnost4_1sk)

add_executable(Dedicnost4_1sk
        Dedicnost4_1sk/Animal.cpp
        Dedicnost4_1sk/Animal.h
        Dedicnost4_1sk/Cat.cpp
        Dedicnost4_1sk/Cat.h
        Dedicnost4_1sk/Dog.cpp
        Dedicnost4_1sk/Dog.h
        Dedicnost4_1sk/main.cpp
        Dedicnost4_1sk/kovařík_Pijavice.cpp
        Dedicnost4_1sk/kovařík_Pijavice.h
        Dedicnost4_1sk/aksat_kontinent.h
        Dedicnost4_1sk/aksat_kontinent.h)
