#include <iostream>

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;
    
    //Constructor
    Car(std::string make, std::string model, int year, std::string color){
        this->make = make;
        this->model = model;
        this->year = year;
        this->color = color;
    }
};


int main() {
    
    Car car1("Chevy", "Corvette", 2022, "Blue");
    Car car2("Ford", "Mustang", 2023, "Red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    std::cout << "----------" << '\n';

    std::cout << car2.make << '\n';
    std::cout << car2.model << '\n';
    std::cout << car2.year << '\n';
    std::cout << car2.color << '\n';

    return 0;
}