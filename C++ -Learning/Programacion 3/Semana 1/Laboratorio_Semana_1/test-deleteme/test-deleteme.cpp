#include <iostream>
#include <ctime>

int random_number;

int main() {
    //cambiando la seed/semilla de nuestra funcion random. usando la funcion time como semilla.
    srand(time(NULL));

    random_number = (rand()%3)+1;

    std::cout << random_number << '\n';


    return 0;
}