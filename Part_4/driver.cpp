#include "Prime.h"

int main(){

    PrimeNumber a(23), b(23), c;
    c = 43;
    int d = 45;

    cout <<  c.operator++() << endl;
    cout<< ++c<<endl; // ++n
    cout<< --c <<endl;
    cout << (a==b) << endl;
    cout << a.operator==(b) << endl;

    return 0;
}