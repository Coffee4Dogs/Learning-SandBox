#include <iostream>

int main(){

    int age;

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age;

    // THE ORDER MATTERS!
    if(age >= 100){
        std::cout << "You are too old to enter this site" << std::endl;
    }

    else if(age >= 18){
        std::cout << "Welcome to the site" << std::endl;
    }

    else if(age <= 0){
        std::cout << "You haven't been born yet!" << std:: endl;
    }

    

    else{
        std::cout << "You are not enought to enter!"<< std::endl;
    }



    return 0;

}