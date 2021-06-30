#include<iostream>

static int s_local = 10;

extern int s_global;

void print_static(){

    std::cout << s_local << " " << s_global << std::endl; // prints 10 & 8
}
