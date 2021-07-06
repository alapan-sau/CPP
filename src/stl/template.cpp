#include<iostream>


// function
template<typename T>
T square(T value){
    return value * value;
}


// class
template<typename T>
class Vec{
    private:
        T arr[1000];
        int size = 0;
        int capacity = 1000;

    public:
        Vec(){}
        int getCapacity() const {
            return capacity;
        }
        int push(T val){
            if(size >= capacity-1) return 0;
            else{
                arr[size] = val;
                size++;
                return 1;
            }
        }
        int getSize() const {
            return size;
        }
        void print() const {
            for(int i=0;i<size;i++){std::cout << arr[i] << " ";}
            std::cout << std::endl;
        }

        // * overloaded
        Vec operator*(const Vec& other){
            Vec<T>ret;
            for(int i=0;i<std::min(size, other.getSize());i++){
                ret.push(arr[i] * other.arr[i]);
            }
            return ret;
        }
};




int main(){
    // templated square functions can take any data types
    std::cout << square(5) << " " << square(5.5f) << " " << square('c') << std::endl;


    // templated vector class
    Vec<float>arr1;
    Vec<float>arr2;

    arr1.push(1.0f);
    arr1.push(2.0f);
    arr1.push(3.0f);
    arr1.push(4.0f);
    arr1.push(5.0f);

    arr2.push(5.0f);
    arr2.push(4.0f);
    arr2.push(3.0f);
    arr2.push(2.0f);
    arr2.push(1.0f);

    // templated square function also evaluates Vec, as * is overloaded
    auto arr3 = square(arr1);
    auto arr4 = square(arr2);

    arr3.print();
    arr4.print();

    auto arr5 = arr3 * arr4;

    arr5.print();
}