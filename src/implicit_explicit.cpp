#include<iostream>

class Example{
    int m_number;
    std::string m_str;

    public:

    // explicit constructor prevents it from getting constructed implicitly
    explicit Example(int num){
        m_number = num;
    }
    Example(std::string str){
        m_str = str;
    }

};

int main(){
    // implicit conversion
    // Example e  = 1;
    // throws error as explicit keyword is used for the constructor

    // needs to be constructed explicitly
    Example e(1);

    // implicit conversion
    // note: we cant pass "Hi" as const char *;
    Example e1 = std::string("Hi");
}