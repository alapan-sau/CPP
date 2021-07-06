#include<iostream>

class Example{
    private:
        int x;
        int y;

    public:
        Example(int x, int y){
            this->x = x;
            (*this).y = y;
        }

        int GetX() const {

            // mark the const keyword here
            const Example* e = this;
            return e->x;

            // here this is ``const Example* const this``
            // as its a const method, and this shouldn't be updated
        }
};

int main(){
    Example e(1,2);
    std::cout << e.GetX() << std::endl;
    return 0;
}