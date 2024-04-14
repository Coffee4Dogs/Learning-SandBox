#include <iostream>

void printInfo(const std::string &name, const int &age);

int main() {
    
    // const parameter = parameter that is efectively read-only
    //                     code is more secure & conveys intent
    //                     useful for references & pointers

    std::string name = "Bro";
    int age = 21;

    printInfo(name, age);
        

    return 0;
}

void printInfo(const std::string &name, const int &age){

    // name = " ";
    // age = 0;

    std::cout << name << '\n';
    std::cout << age << '\n';

}