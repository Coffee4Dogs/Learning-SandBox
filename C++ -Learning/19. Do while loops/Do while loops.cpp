#include <iostream>

int main()
{
    
    int number;

    // will do at least once the code inside the while
    do{
        std::cout << "Enter a positive number" << std::endl;
        std::cin >> number;
    }while(number < 0);
        

    return 0;
}