#include <iostream>

int main()
{
    // way 1: Declare it with the values.
    // std::string cars[] = {"corvete", "Mustang", "Camry"};

    // Way 2: Declare it just saying how big it is.
    std::string cars[3];
    // Later assign the values
    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    
    

    return 0;
}