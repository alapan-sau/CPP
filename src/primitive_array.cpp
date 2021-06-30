#include<iostream>

// we are passing the size of the arr & ptr
// int arr[] & int* arr have only compile time differences of handling, at runtime
// they are same
void function(int arr[], int* ptr){

    for(int i=0;i<5;i++){
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for(int i=0;i<5;i++){
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // sizeof is a compile time operand, so it doesnt calculate this at runtime
    std::cout << sizeof arr << " " << sizeof ptr << std::endl; // prints 8 and 8
}

int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        arr[i] = 2;
    }

    int* ptr = arr;
    ptr[2] = 1;
    // [2] is a index operator, what it does is *(ptr+2)

    for(int i=0;i<5;i++){
        std::cout << ptr[i] << " ";
    }
    std::cout << std::endl;

    // sizeof is a compile time operand, and compiler knows size of arr is 4*5
    std::cout << sizeof arr << " " << sizeof ptr << std::endl;  // prints 20 & 8

    function(arr, ptr);

    return 0;
}