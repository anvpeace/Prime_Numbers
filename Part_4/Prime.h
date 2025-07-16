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
    friend ostream& operator<<(ostream &os, const PrimeNumber &r){
        os<<r.value<<endl;
        return os;
    };

    friend istream& operator>>(istream &is, PrimeNumber &r){
        is>>r.value;
        return is;
    };

    // prefix overload
    // PrimeNumber operator++(int){
    //     PrimeNumber incr_value(value);
    //     // isPrime(value);
    //     if(isPrime(value)){
    //         ++value;
    //         ++value;
            
    //         if(isPrime(value) == 9){
    //         value += 2;
    //         }
    //     }
        
        
    //     // else if(isPrime(value) == 9){
    //     //     value += 2;
    //     // }

    //     return incr_value;
        
    
    // };
    PrimeNumber& operator++(){
        // PrimeNumber incr_value(value);
        isPrime(value);
        if(isPrime(value)== true){
            ++value;
            ++value;
        }else{
            ++value;
        }

        return *this;
        
    };          

    PrimeNumber operator--(int){
        PrimeNumber decr_value(value);
        --value;
        return decr_value;
    }; 

    PrimeNumber& operator--(){
        // PrimeNumber incr_value(value);
        if(!isPrime(value)){
            if(value == 9){
                value -=2;
            }else{
                value -= 4;

            }

        }

        return *this;
    
    };

    // PrimeNumber& operator--(){
    //     // PrimeNumber incr_value(value);
    //     --value;
    //     return *this;
    // };


    bool operator==(PrimeNumber &rhs){
        return value == rhs.value;
    }
};
#endif
/*
Part 4: Continue with PrimeNumber class:
s) Overload the prefix and postfix ++ operators, so they return
the next largest prime number.
t) Overload the prefix and postfix - - operators, so they return
next smallest prime number. The smallest possible number should
be 2.
l) Write a part in main function which test all function and
class component implemented in this part
*/