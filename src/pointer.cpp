#include<iostream>
using namespace std;

int main(){
    int a = 3;
    // this is called referencing a
    int* ptra = &a;

    char c = 'a';
    char* ptrc = &c;

    long long int l = 10000000000;
    long long int* ptrl = &l;


    // every pointer is just an integer which stores memory location (size is 8 bytes)
    cout << sizeof ptra << " " << sizeof ptrc << " " << sizeof ptrl << endl;

    // note we need to cast (void*) for a char pointer, because the << operator is overloaded in weird way for char*
    // char* = "Hello" =>  to support deprecated method of c
    cout <<  ptra << " " <<  ptrl << " " <<  (void *)ptrc << endl;

    // dereferncing pointers gives us the data in that memory location
    cout << *ptra << " " << *ptrc << " " << *ptrl << endl;
    cout << ++(*ptra) << " " << ++(*ptrc) << " " << ++(*ptrl) << endl;

    // note here ptra, ptrc & ptrl are variables of their own with different memory address

    return 0;
}