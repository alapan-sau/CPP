#include<iostream>

class Example{
    public:
    std::string m_name;
    Example(){}

    // default constructor
    Example(std::string name){
        m_name = name;
    }

    std::string printName() const{
        return m_name;
    }

    // destructor
    ~Example(){
        std::cout << m_name << " "<<"Destroyed" << std::endl;
    }

};

void function(Example* &expPtrStack, Example* &expPtrNew, Example* &expPtrMalloc){
    // stack allocation
    // constructor called
    Example exp("stack");
    expPtrStack = &exp;

    // heap allocation using new
    // constructor called
    expPtrNew = new Example("new"); // not using '()' also works for the default constructor

    // heap allocation using malloc
    // constructor NOT called
    expPtrMalloc = (Example*)malloc(sizeof(Example));

    std::cout  << exp.printName() <<" " << (*expPtrNew).printName() << " " << (*expPtrMalloc).printName() << std::endl;
    // prints stack new garbage

    expPtrMalloc->m_name = "malloc";

    std::cout  << exp.printName() <<" " << (*expPtrNew).printName() << " " << (*expPtrMalloc).printName() << std::endl;
    // prints stack new malloc
}

int main(){

    Example* expPtrNew;
    Example* expPtrMalloc;
    Example* expPtrStack;


    std::cout << "function called" << std::endl;
    function(expPtrStack, expPtrNew, expPtrMalloc);
    std::cout << "function returned" << std::endl;



    delete expPtrNew;   // [prints Destroyed]
    free(expPtrMalloc); // [DONOT prints Destroyed as destructor not called]



    // Another thing about New & Delete for array intialisation:
    // Rule of Thumb, every new corresponds to a delete;
    // on usage of array operator in new, use that in delete too;
    Example* nonArray = new Example("nonArray");

    //note New for arrays cant be called with non-dummyconstructor
    Example* array = new Example[10];

    for(int i=0;i<10;i++) array[i] = Example("array");


    std::cout << sizeof(nonArray) << " " << sizeof(nonArray) << std::endl; // prints 8 8
    delete nonArray; //prints nonArray destroyed
    delete[] array; // prints array destoyed 10 times
}