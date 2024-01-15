#include <iostream>
#include <ctime>


int main()
{
    // pseudo-random = NOT truly random (but close)
    // what programers tipically do, is that they grab the currend calendar time as a seed 



    // initialize the random number generator
    srand(time(NULL));

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;


    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;


    return 0;
}