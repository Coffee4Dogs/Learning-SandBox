#include <iostream>

int main()
{
    
    
    std::string foods[3];
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size; i ++){
        std::cout << "Enter a food you like or 'q' to quit #" << i << ": " << std::endl;
        std::getline(std::cin, temp);
        if(temp=="q"){
            break;
        }
        else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food:" << std::endl;
    for(std::string food : foods){
        std::cout << food << std::endl;
    }









    return 0;
}