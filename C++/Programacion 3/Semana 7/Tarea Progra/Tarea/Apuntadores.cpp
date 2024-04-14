/* ***************************************
    Ingrese en este espacio sus datos:
    Nombre: Jack Hollmann Lagos Mejia
    Numero de Registro: 32011727

***************************************** */

// . Programa B
// a. Escriba un pequeño programa que declare e inicialice una variable double, una
// variable int y una variable char. Luego declare un apuntador para cada una de
// las tres variables. El programa debe imprimir: la dirección, los valores, el tamaño
// y el tipo de dato para las 6 variables.
// b. Incluya en el archivo a subir impresión de pantalla de la ejecución de este
// programa.


#include <iostream>

int main() {
    //Variables
    double Altura = 1.2;    int Edad = 10;  char Genero = 'M';
    
    //Pointers:
    double *pAltura = &Altura;  int *pEdad = &Edad;   char *pGenero = &Genero;

    //Size:
    int sAltura = sizeof(Altura);   int sEdad = sizeof(Edad);  int sGenero = sizeof(Genero);

    std::cout << "Los valores" << '\n';
    std::cout << "- Altura: \t\t" << *pAltura << '\n';
    std::cout << "- Edad: \t\t" << *pEdad << '\n';
    std::cout << "- Genero: \t\t" << *pGenero << '\n';

    std::cout << '\n';

    std::cout << "La direccion en Memoria RAM: " << '\n';
    std::cout << "- Altura: \t\t" << &pAltura << '\n';
    std::cout << "- Edad: \t\t" << &pEdad << '\n';
    std::cout << "- Genero: \t\t" << &pGenero << '\n';

    std::cout << '\n';

    std::cout << "El tamano: " << '\n';
    std::cout << "- Altura: \t\t" << sAltura << " bytes" << '\n';
    std::cout << "- Edad: \t\t" << sEdad << " bytes" << '\n';
    std::cout << "- Genero: \t\t" << sGenero << " byte" << std::endl;

    std::cout << '\n';

    std::cout << "El tipo: " << '\n';
    std::cout << "- Altura: \t\t" << typeid(Altura).name() << " (double)" << '\n';
    std::cout << "- Edad: \t\t" << typeid(Edad).name() << " (integer)" << '\n';
    std::cout << "- Genero: \t\t" << typeid(Genero).name() << " (char)" << std::endl;
    std::cout << "- Puntero (Altura) \t" << typeid(pAltura).name() << " (pointer)" << std::endl;
    std::cout << "- Puntero (Altura) \t" << typeid(pEdad).name() << " (pointer)" << std::endl;
    std::cout << "- Puntero (Altura) \t" << typeid(pGenero).name() << " (pointer)" << std::endl;


   

    return 0;
}