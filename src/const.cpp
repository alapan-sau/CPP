#include<iostream>

// use of const method in classes;
// NOTE its not available for independent functions
class Example{
    int x =5, y=10;
    const int* const ptr = 0;
    public:
        int GetX() const { // this methods doesn't let any class variable mutate
            return x;
        }
        int GetY(){ // this method has a normal behaviour
            return y;
        }
        const int* const GetPtr() const { // 3 const in one line xD just for fun
            return ptr;
        }
};

void printExample(const Example& e){ // const reference pass gurantees immutability! But at what cost?
    std::cout << e.GetX() << std::endl; // prints 5;
    //std::cout << e.GetY() << std::endl;
    // throws error as GetY doesnt guarantee immutability!!
    const int* const ptr = e.GetPtr();
    std::cout << ptr << std::endl; // prints 0x0 or NULL;
}

int main(){
    // CASE 1:
    const int a = 5;
    // means the variable a is basically a constant.
    // a = 6;
    // throws error
    std::cout << a << std::endl; //prints 5


    // CASE 2:
    int b = 6;
    const int* ptr = &b; // it is same as using ``int const * ptr = &b;``
    // it means, the data at ptr can't be changed,
    // note: it doesnt mean the address can't be changed
    // *ptr = 6;
    //throws error;
    std::cout << *ptr << std::endl; //prints 6

    ptr = &a; // doesnt throw error
    std::cout << *ptr << std::endl; //prints 5


    //CASE 3:
    int c = 10;
    int* const ptr1 = &c;
    // it means although the data can be changed, the address can't be;
    // ptr1 = &a;
    // throws error
    std::cout << *ptr1 <<" " << c << std::endl; // prints 10 10

    *ptr1 = 8;
    std::cout << *ptr1 <<" " << c << std::endl; // prints 8 8

    //CASE 4:
    int d = 15;
    const int* const ptr2 = &d;
    // neither of address or data can be changed
    // d = &a;
    //throws error
    // *d = 10;
    //thorws error
    std::cout << *ptr2 <<" " << d << std::endl; // prints 15 15

    //CASE 5:
    int e = 10;
    const int& ref = e;
    // immutable reference
    // ref = 10;
    // throws error


    //CASE 6:
    Example exp;
    printExample(exp);
    // Look up at the respective class and function

    return 0;
}