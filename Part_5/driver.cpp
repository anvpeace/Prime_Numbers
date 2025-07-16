#include "Prime.h"

int main(){

    PrimeNumber a(20), b(23),c(9);
    //  c = 45;

    // cout <<  c.operator++(14) << endl;
    cout<<"Number entered: "<< c <<endl;
    // cout<<"Next Prime Number: "<<++c<<endl; // ++n
    cout<<"Previous Prime Number: "<<--c<<endl; // ++n   
    // cout<< ++c<<endl; // ++n

    // cout<< --b <<endl;
    cout << "Are 'a' and 'b' equal?: " << (a==b) << endl;
    cout << "Are 'b' and 'c' equal?: "<< b.operator==(c) << endl;

    return 0;
}