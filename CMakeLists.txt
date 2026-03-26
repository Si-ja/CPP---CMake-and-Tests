cmake_minimum_required(VERSION 3.10.0)
project(FizzBuzzWithTests VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()
add_subdirectory(../ExternalLibs/googletest build)

set(Headers
    FizzBuzzWithTests.cpp
)
set(Sources
    FizzBuzzWithTests.h
)

add_library(FizzBuzzWithTests STATIC ${Sources} ${Headers})
add_subdirectory(tests)
