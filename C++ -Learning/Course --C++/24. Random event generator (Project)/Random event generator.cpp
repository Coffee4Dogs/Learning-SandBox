#include <iostream>
#include <ctime>


int main()
{

    srand(time(0));
    int randNum = rand() % 5 + 1;
    

    switch (randNum)
    {
    case 1:
        std::cout << "You won a bumper sticker" << std::endl;
        break;
    case 2:
        std::cout << "You won a t-shirt!" << std::endl;
        break;
    case 3:
        std::cout << "You won a free lunch" << std::endl;
        break;
    case 4:
        std::cout << "You won a gift card!" << std::endl;
        break;
    case 5:
        std::cout << "You won a concert tickets!" << std::endl;
        break;
    default:
        break;
    }


    return 0;
}