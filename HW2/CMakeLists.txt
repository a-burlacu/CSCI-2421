cmake_minimum_required(VERSION 3.22)
project(HW2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HW2
        Comparator_ID.h
        Comparator_Name.h
        HW2.cpp
        Student.cpp
        Student.h)
