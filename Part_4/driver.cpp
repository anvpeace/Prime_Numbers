#include "Prime.h"

int main(){

    PrimeNumber a(23), b(23), c;
    c = 9;
    int d = 45;

    // postfix operator returns the original numbers which uses c++ to call overload function
    cout<<"Incrementation"<<endl;
    cout<<"Number entered: "<< c++ <<endl;
    // prefix operator for modified number
    cout<<"Next Prime Number: "<<++c<<"\n"<<endl; // ++n
    
    cout<<"Decrementation"<<endl;
    // postfix operator returns the original numbers which uses c++ to call overload function
    cout<<"Number entered: "<< c-- <<endl;

    // prefix
    cout<<"Previous Prime Number: "<<--c<<endl; // ++n 


    cout << (a==b) << endl;
    cout << a.operator==(b) << endl;

    return 0;
}