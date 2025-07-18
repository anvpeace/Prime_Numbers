#ifndef PRIME_H
#define PRIME_H
#include <iostream>
using namespace std;

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
            };

        };
        return true;

    };

public:

    // constructors
    PrimeNumber(int v):value(v){};
    PrimeNumber():PrimeNumber(2){};
    void output(){
        cout<<value<<endl;
    };
    friend ostream& operator<<(ostream &os, const PrimeNumber &r){
        os<<r.value<<endl;
        return os;
    };

    friend istream& operator>>(istream &is, PrimeNumber &r){
        is>>r.value;
        return is;
    }
// use postfix to return original number
    PrimeNumber operator++(int){
        PrimeNumber incr_value(value);
        ++value;
        return incr_value;
    }

// use prefix to return modified number
    PrimeNumber& operator++(){
        // if the number is not prime +1
        if(isPrime(value)==false){
            ++value;
        }else{
            // for loop needed that checks for square root and skips through even numbers
            for(int i = 3; i * i <= value; i = i + 2){
                if(value % i == 0){
                    // if the number is a square root then add 2 to the value to get the next prime number
                     value += 2;
                }
            }
        }
        // or else the number is prime return it unless the number is 9
        return *this;

    }

    // postfix - returns original number
    PrimeNumber operator--(int){
        PrimeNumber decr_value(value);
        --value;
        return decr_value;
    }; 

    // prefix
    PrimeNumber& operator--(){
        // PrimeNumber incr_value(value);
        if(isPrime(value)==false){
            --value;
        }
        
        if (value == 9){
            // for loop needed that checks for square root and skips through even numbers
            for(int i = 3; i * i <= value; i = i + 2){
                if(value % i == 0){
                    // if the number is a square root then add 2 to the value to get the next prime number
                     value -= 2;
                }
            }
        }

        return *this;
    
    };

    bool operator==(PrimeNumber &rhs){
        return value == rhs.value;
    }

    bool operator!=(PrimeNumber &rhs){
        return value != rhs.value;
    }
    
};
#endif

/*
Part 5: Continue with PrimeNumber class:
o) Overload the operator ==, != to output boolean, with auto
conversion.
p) Write a part in main function which test all function and
class component implemented in this p
*/