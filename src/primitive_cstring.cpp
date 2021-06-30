#include<iostream>

int main(){
    char* str = "hello"; // here we declared a char pointer
    // by default any "" literal is a const char * which ends with '\0'

    // str[0] = 'a'; => This line throws error in most compilers, as the string is stored in read-only
    // the actual behavious is undefined, so its best to NOT use char*, but only use const char *
    std::cout << str << std::endl;

    char str1[] = "hello"; // we declared a char array
    str1[0] = 'a'; // this works as here, we are stating that the string is not read only
    std::cout << str1 << std::endl;


    char str2[5] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << str2 << std::endl; // prints hello+garbage

    char str3[6] = {'H', 'e', 'l', 'l', 'o', 0};

    // 0 or '\0' is the null character, its ascii value is 0
    std::cout << str3 << std::endl; // prints hello


    return 0;

}