#include<iostream>

// function is a local scope, note static works in any local scope {}
// a variable inside is generally have a limited lifetime(untill the function return)
// however static variables have infinite lifetime
void used(){

    // declaration only happens the first time;
    static int value = 0;

    // the lifetime of the variable value is infinite
    // it never gets destroyed in memory and is kept intact
    value++;
    std::cout << value << std::endl;
}


int main(){
    used(); // prints 1
    used(); // prints 2
    used(); // prints 3

    return 0;
}
