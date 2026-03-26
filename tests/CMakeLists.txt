cmake_minimum_required(VERSION 3.10.0)

set(Sources
    FizzBuzzTests.cpp
)

add_executable(FizzBuzzWithTestsTests ${Sources})
target_link_libraries(FizzBuzzWithTestsTests PUBLIC
    gtest_main
    FizzBuzzWithTests
)

add_test(
    NAME FizzBuzzWithTestsTests
    COMMAND FizzBuzzWithTestsTests
)