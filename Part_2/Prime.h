#ifndef PRIME_H
#define PRIME_H
#include <iostream>
using namespace std;
/*
Part 2: Continue with PrimeNumber class:
e) Default constructor setting value to 2 (the smallest prime
number), Implement constructor delegation
f) One-parameter constructor for setting a prime number, which
should check if the input is prime.
g) Write a part in main function which test all function and
class component implemented in this part.
*/
class PrimeNumber{
private:
    long long value;
        bool isPrime(int v){
        value = v;
        if(v == 0 || v == 1 || v % 2 == 0){
            return false;
        }else if(v == 2){
            return true;
        }else{
            // for loop needed that checks for square root and skips through even numbers
            for(int i = 3; i * i <= v; i = i + 2){
                if(v % i == 0){
                    return false;
                }
            }

        };
        return true;
    };

public:
    PrimeNumber(int v):value(v){};
    PrimeNumber():PrimeNumber(2){};


    void setPrimeNumber(int v){value = v;
         isPrime(v);
    }
    int getPrimeNumber(){return value;}

    void output(){
        cout<<getPrimeNumber()<<endl;
    };

};
#endif

/*
Part 3: Continue with PrimeNumber class:
h) Overload the insertion operator << to output PrimeNumber
objects.
i) Overload the extraction operator >> to input PrimeNumber
objects, throwing an exception if input is invalid.
j) Write a part in main function which test all function and
class component implemented in this part.
Part 4: Continue with PrimeNumber class:
s) Overload the prefix and postfix ++ operators, so they return
the next largest prime number.
t) Overload the prefix and postfix - - operators, so they return
next smallest prime number. The smallest possible number should
be 2.
l) Write a part in main function which test all function and
class component implemented in this p
*/