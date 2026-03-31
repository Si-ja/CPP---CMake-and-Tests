#ifndef FIZZBUZZWITHTESTS_H_INCLUDED
#define FIZZBUZZWITHTESTS_H_INCLUDED

#include <string>

namespace FizzBuzzLib
{
    // Print FizzBuzz starting from a starting value, to an end (included).
    void printFizzBuzz(int startValue, int endValue);

    // Get representaton of a FizzBuzz for a single value.
    std::string singleAnswer(const int& value);
}

#endif // FIZZBUZZWITHTESTS_H_INCLUDED