#ifndef PRIME_H
#define PRIME_H
#include <iostream>
using namespace std;
/*
Part 1: Implement a class called PrimeNumber.
a) A class named PrimeNumber
b) a private data members: value (long long).
c) Accessors and Mutators function for private member variables.
A method isPrime() to check if a number is prime, used within
setters.
d) Write a part in main function which test all function and
class component implemented in this part.
*/
class PrimeNumber{
private:
    long long value;


public:

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
    }
    void setPrimeNumber(int v){value = v;
        isPrime(v);
    }
    int getPrimeNumber(){return value;}



};
#endif
