//Uso 3 de Apuntadores: Paso de valores por referencia en funciones
#include <iostream>

//prototipos

int calcularMayorR(int *a, int *b);
int calcularMayorV(int a, int b);

int main() {
    // definir dos variables para probar funcion calcular Mayor
    int numA, numB;
    // leer los dos valores
    std::cout << "Ingrese los numeros : " << '\n';
    std::cin >> numA >> numB;
    // desplegar rotulo y probar funcion
    
    std::cout << "Paso por valores: el mayor es: "<< calcularMayorV(numA, numB) << '\n';
    std::cout << "Paso por referencia: el mayor es: "<< calcularMayorR(&numA, &numB) << '\n';

    
    
    return 0;
}

// definir una funcion calcularMayor que calcule el mayor de dos numeros enteros


int calcularMayorV(int a, int b){ //Pass by Value
    return (a > b ? a : b);
}
// definir una funcion calcularMayor que calcule el mayor de la referencia a dos numeros
int calcularMayorR(int *a, int *b){ // Pass by Reference
    return (*a > *b ? *a : *b);
}