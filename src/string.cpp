#include<iostream>
#include<string>

int main(){
    std::string name = "Alapan";
    // note here we store a const char * as std::string

    std::cout << name << std::endl;
    // need to include<string> for using the << operator

    // note, ``name = "Alapan" + " Sau" ``
    // throws error!!. We cannot add two const char *,
    // however, we can add string and const char * as follows:
    name += " Sau";

    std::cout << name << std::endl;

    bool contains = name.find("pan") != std::string::npos;
    // npos is an illegal position for the find operation
    std::cout << contains << std::endl; // prints 1

    if(contains) std::cout << name.find("pan") << std::endl; //prints positon of 'p' if'pan' found

    std::cout << name.size() << std::endl; // prints size of string name


    return 0;
}