#include <iostream>

class Salary{
    public:
        int sal;

        friend int increment(Salary s);

};

int increment(Salary s){
    s.sal = s.sal + 7000;
    return s.sal;
}


int main() {
    
    Salary s;
    std::cout << "Increment is: ";
    std::cout << increment(s);

    return 0;
}