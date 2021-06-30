#include<iostream>
static int s_local = 5;  // static tells the scope of the variable is only this file

int s_global = 18; // by default it has a global scope(without static keyword)

void print_static();

int main(){
    std::cout << s_local << " " << s_global << " " << std::endl; // prints 5 & 8
    print_static(); // prints 10 & 8
}