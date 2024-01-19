#include <iostream>

int main(){

    // && means and
    // || means or
    // ! means not

    int temp;
    std::cout << "Enter temperature: " << std::endl;
    std::cin >> temp;
    

    if (temp > 0 && temp < 30){
        std::cout << "The temperature is good" << std::endl;
    }

    else{
        std::cout << "The temperature is bad" << std::endl;
    }




    return 0;
}