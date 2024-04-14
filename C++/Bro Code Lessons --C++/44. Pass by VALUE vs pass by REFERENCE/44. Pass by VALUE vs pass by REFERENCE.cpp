#include <iostream>

void swap(std::string &x, std::string &y);

int main() {
    
    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    swap(x, y);

    
    std::cout << "Main" << std::endl;
    std::cout << "X: " << &x << std::endl;
    std::cout << "Y: " << &y << std::endl;

    return 0;
}

// when we invoke this function, we are creating 
// a copy of the original value. So instead, we 
// could instead pass by reference.
void swap(std::string &x, std::string &y){
    // std::string temp;

    // temp = x;
    // x = y;
    // y = temp;
    std::cout << "Funcion: " << std::endl;
    std::cout << "X: " << &x << std::endl;
    std::cout << "Y: " << &y << std::endl;
}