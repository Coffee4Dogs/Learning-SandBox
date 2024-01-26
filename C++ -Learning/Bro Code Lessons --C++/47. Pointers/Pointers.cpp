#include <iostream>

int main() {
    
    // pointers = variable that stores a memory address of another variable
    //             sometimes it's easier to work with an address

    // & address of operator
    // * dereferencer operator

    // The common convencion for pointers is p, then the variable Name
    std::string Name = "Bro";
    int Age = 21;
    std::string FreePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"};

    std::string *pName = &Name;
    int *pAge = &Age;
    std::string *pFreePizzas = FreePizzas;

    std::cout << pName << '\n';
    std::cout << *pName << '\n';

    std::cout << pAge << '\n';
    std::cout << *pAge << '\n';
    
    std::cout << pFreePizzas << '\n';
    std::cout << *pFreePizzas << '\n';

    return 0;
}