#include <iostream>

int main()
{
    // First number means rows, next one columns.
    // If you are inicializing it, you dont need the rows, but you need the columns.
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvete", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram 1500"}};

    // std::cout << cars[0][0] << " ";
    // std::cout << cars[0][1] << " ";
    // std::cout << cars[0][2] << std::endl;
    // std::cout << cars[1][0] << " ";
    // std::cout << cars[1][1] << " ";
    // std::cout << cars[1][2] << std::endl;
    // std::cout << cars[2][0] << " ";
    // std::cout << cars[2][1] << " ";
    // std::cout << cars[2][2] << std::endl;

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    std::cout << "Rows " << rows << std::endl;
    std::cout << "Columns " << columns << std::endl;


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << std::endl;
        }

    }





    return 0;
}