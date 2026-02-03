cmake_minimum_required(VERSION 4.1)
project(C2B2B)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(C2B2B
        variableSwap.cpp
        variableSwap.h
        generateRandomNumber.cpp
        generateRandomNumber.h
        main.cpp
        twoSum.cpp
        twoSum.h
)
