#include<iostream>

int main(){
    int level = 11;

    // usage of if-else
    std::string level_name = "";
    if(level < 5){
        level_name = "low";
    }
    else if(level < 10){
        level_name = "medium";
    }
    else{
        level_name = "high";
    }


    // usage of ternary operator
    level_name = level < 5 ? "low" : level < 10 ? "medium" : "high";

    std::cout << level_name << std::endl; // prints high;


}