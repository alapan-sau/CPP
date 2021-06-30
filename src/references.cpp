#include<iostream>
using namespace std;

void increment(int& value){
    value++;
}

int main(){
    int a = 3;
    // general use of a reference:
    // Note, here ref is not a variable. It doesn't have any memory
    // It just points to memory location of a

    int& ref = a; // ref is not a variable so we say it as "declaring a 'reference', not a 'variable'"
    ref++;
    cout << a << endl;

    cout << a << endl;
    // A better vivid usage in function
    increment(a); // we are passing a by reference
    cout << a << endl;


    int b = 10;
    // CAUTION, here we set the value of a to b
    // we DONOT make ref point to b
    ref = b;
    cout << ref << " " << a << " " << b << endl;

    return 0;
}