// Something that uses multiple if statements

#include <iostream>

int main(){

    char grade;
    std::cout << "Enter the grade" << std::endl;
    std::cin >> grade;

    switch (grade)
    {
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good!";
            break;
        case 'C':
            std::cout << "You need to improve!";
            break;
        default:
            std::cout << "Select an option";
            break;
    }
    
    

    


    return 0;
}
