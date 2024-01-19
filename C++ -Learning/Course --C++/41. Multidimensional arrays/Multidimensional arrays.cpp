#include <iostream>

int main()
{
    // First number means rows, next one columns.
    // If you are inicializing it, you dont need the rows, but you need the columns.
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvete", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};


    std::cout << cars[0][0] << std::endl;
    std::cout << cars[0][1] << std::endl;


    return 0;
}