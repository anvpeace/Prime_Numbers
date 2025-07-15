#include "Prime.h"

int main(){

    PrimeNumber a(23), b(23), c(13);

    cout << (a==b) << endl;
    cout << a.operator==(b) << endl;

    return 0;
}