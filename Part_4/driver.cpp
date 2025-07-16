#include "Prime.h"

int main(){

    PrimeNumber a(23), b(23), c;
    c = 9;
    int d = 45;

    cout<<"Number entered: "<< c <<endl;
    cout<<"Next Prime Number: "<<++c<<endl; // ++n
    cout<<"Previous Prime Number: "<<--c<<endl; // ++n  
    cout << (a==b) << endl;
    cout << a.operator==(b) << endl;

    return 0;
}