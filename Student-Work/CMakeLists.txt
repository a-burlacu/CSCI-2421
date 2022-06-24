cmake_minimum_required(VERSION 3.14)
project(Student_Work)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Student_Work
        LinkedList.cpp
        LinkedList.h
        Node.cpp
        Node.h)
