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
            }

        };
        return true;

    };

public:
    PrimeNumber(int v):value(v){};
    PrimeNumber():PrimeNumber(2){};
    void output(){
        cout<<value<<endl;
    };

    PrimeNumber& operator++(){
        // PrimeNumber incr_value(value);
        ++value;
        return *this;
    };         

    PrimeNumber& operator--(){
        // PrimeNumber incr_value(value);
        --value;
        return *this;
    };

    bool operator==(PrimeNumber &rhs){
        return value == rhs.value;
    }

    bool operator!=(PrimeNumber &rhs){
        return value != rhs.value;
    }
    
    friend ostream& operator<<(ostream &os, const PrimeNumber &r){
        os<<r.value<<endl;
        return os;
    };

    friend istream& operator>>(istream &is, PrimeNumber &r){
        is>>r.value;
        return is;
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