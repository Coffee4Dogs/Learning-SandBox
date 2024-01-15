#include <iostream>



void Happy_Birthday(std::string name, int  age);

// Opcion 2
// Se puede programar una funcion aqui mismo o abajo del codigo main, pero siempre se tiene que declarar.
// void Happy_Birthday(){

//     std::cout << "Happy Birthday to you!" << std::endl;
//     std::cout << "Happy birthday dear you!" << std::endl;

// }



int main()
{
    
    std::string name = "Jack";
    int age = 21;
    Happy_Birthday(name, age);    
    return 0;
}


void Happy_Birthday(std::string name, int  age){

    std::cout << "Happy Birthday to you!" << name <<std::endl;
    std::cout << "Happy birthday dear you!" << name << std::endl;
    std::cout << "You are: " << age << std::endl;


}