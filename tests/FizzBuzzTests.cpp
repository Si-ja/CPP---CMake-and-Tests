#include "../FizzBuzzWithTests.h"
#include <gtest/gtest.h>
#include <string>
#include <iostream>

TEST(FizzBuzzWithTests, MockTest)
{
    // Example Test
    ASSERT_TRUE(true);
}

TEST(FizzBuzzWithTests, SingleAnswersProcessable)
{
    std::map<int, std::string> mappedAnswers;

    mappedAnswers[3] = "Fizz";
    mappedAnswers[5] = "Buzz";
    mappedAnswers[15] = "FizzBuzz";
    mappedAnswers[1] = "1";
    mappedAnswers[8] = "8";

    for (std::pair<int, std::string> component : mappedAnswers)
    {
        ASSERT_EQ(component.second, FizzBuzzLib::singleAnswer(component.first));
    }
}