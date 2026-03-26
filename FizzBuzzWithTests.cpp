#include <iostream>
#include <cstdlib>
#include <string>
#include "FizzBuzzWithTests.h"

namespace FizzBuzzLib
{
    void printFizzBuzz(int startValue, int endValue)
    {
        for (int i=startValue; i<=endValue; i++)
        {
            std::cout << singleAnswer(i) << "\n";
        }
    }

    std::string singleAnswer(int value)
    {
        std::string answer{};
        answer = (value % 3 == 0 ? answer.append("Fizz") : answer);
        answer = (value % 5 == 0 ? answer.append("Buzz") : answer);
        return answer.length() != 0 ? answer : std::to_string(value);
    }
}
