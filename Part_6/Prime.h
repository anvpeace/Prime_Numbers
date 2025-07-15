#ifndef PRIME_H
#define PRIME_H
#include <iostream>
using namespace std;

class Prime{

private:

public:


};
#endif

/*
Part 6: Continue with PrimeNumber class:
m) Overload the binary operator +, - to output PrimeNumber
objects, with auto conversion.
For example, Addition (+) should return the nth prime number
after the current prime where n is the argument.
Case 1: PrimeNumber(11) + PrimeNumber(2) should return
PrimeNumber(17)
Case 2: PrimeNumber(11) + 2 should return PrimeNumber(17)
For example, Subtraction (-) should return the nth prime number
before the current prime where n is the argument.
Case 3: PrimeNumber(11) - PrimeNumber(2) should return
PrimeNumber(5)
Case 4: PrimeNumber(11) - 2 should return PrimeNumber(5)
Ensure handling of edge cases like going beyond known primes or
to negative numbers
n) Write a part in main function which test all function and
class component implemented in this part.
*/