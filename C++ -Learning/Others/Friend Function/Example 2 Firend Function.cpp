#include <iostream>

class MyClass{

    friend void double_x(MyClass &myobject);

    private:
        int x;

    void add(int n){
        x += n;
    }

    public:
        // MyClass(int x) : x(x) {};
        MyClass(int x){
            this->x = x;
        }

    void print(){
        std::cout << "x: " << x << std::endl;
    }
};

void double_x(MyClass &object){
    // object.x *= 2;
    int current_x_value = object.x;
    object.add(current_x_value);
}



int main() {

    MyClass myobject(7);

    myobject.print();

    double_x(myobject);

    myobject.print();

    return 0;
}