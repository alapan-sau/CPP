#include<iostream>

class Example{
    int x, y;

    public:
        Example(){
            x = 5;
            y = 10;
            debug = 0;
        }
        mutable int debug; // mutable makes it mutable inside const methods

        int GetX() const { // this methods doesn't let any class variable mutate
            // y++;
            // throws error, as y is non mutable;
            debug++;
            // no error as the debug is mutable
            return x;
        }
        int GetDebug(){
            return debug;
        }

};

void printExample(const Example& e){ // const reference pass gurantees immutability!
    std::cout << e.GetX() << std::endl; // prints 5;
    // std::cout << e.debug << std::endl;
    // throws error, we cant access it outside as its mutable in const method
}
int main(){

    //CASE 1: in class with const method
    Example exp;
    printExample(exp); // prints 5;
    std::cout << exp.GetDebug()<< std::endl; // prints 1


    //CASE 2: in lambdas
    // TO DO


    return 0;
}