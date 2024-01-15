#include <iostream>


void BakePizza(){
    std::cout << "Here is your Pizza" << std::endl;
}

void BakePizza(std::string topping1){
    std::cout << "Here is your: " << topping1 << " pizza!" << std::endl;
}

void BakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your: " << topping1 << " with " << topping2 << " pizza!" << std::endl;
}



int main()
{

    BakePizza();
    BakePizza("Pepperoni");
    BakePizza("Pepperoni", "Mushrooms");


    return 0;
}



