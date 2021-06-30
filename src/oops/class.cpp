#include<iostream>

class Log{
    private:// Access specifier
    // variables & members  only accesible to this class
    enum{
        error=0,warn,log
    };

    protected:// Access specifier
    // variables & members only accesible to the sub class(inherited from here)


    public:// Access specifier
    // variables & members available outside


};

int main(){

    Log l;

return 0;
}