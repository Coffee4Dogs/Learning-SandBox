#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


// funcion Cuadrado : devuelve el producto de un numero

template <typename T>

int Cuadrado(T n) {
    return n * n;
}

// int Cuadrado(int n) {
//     return n * n;
// }

// double Cuadrado(double n) {
//     return n * n;
// }


// funcion Mayor: devuelve el mayor de dos variables

template <typename Ta, typename Tb>
auto numeroMayorFunc(Ta a, Tb b) {
    double valorMayor;
    if (a < b) {
        valorMayor = b;
    } else if ( a > b){
        valorMayor = a;
    } else {
        valorMayor = a;
        cout << " iguales!" << endl;
    }
    return valorMayor;
}

// double numeroMayorFunc(double a, double b) {
//     double valorMayor;
//     if (a < b) {
//         valorMayor = b;
//     } else if ( a > b){
//         valorMayor = a;
//     } else {
//         valorMayor = a;
//         cout << " iguales!" << endl;
//     }
//     return valorMayor;
// }

// char numeroMayorFunc(char a, char b) {
//     char valorMayor;
//     if (a < b) {
//         valorMayor = b;
//     } else if ( a > b){
//         valorMayor = a;
//     } else {
//         valorMayor = a;
//         cout << " iguales!" << endl;
//     }
//     return valorMayor;
// }

// procedimiento Imprime: imprime algo n veces

template <typename Tx, typename Ty>

auto imprimeNVeces(Tx veces, Ty cadena){
    for (int i = 0; i < veces; i++)
    {
        cout << cadena <<endl;
    } 
}

// void imprimeNVeces(int veces, string cadena){
//     for (int i = 0; i < veces; i++)
//     {
//         cout << cadena <<endl;
//     } 
// }

// void imprimeNVeces(double veces, bool cadena){
//     for (double i = 0; i < veces; i++)
//     {
//         cout << cadena <<endl;
//     } 
// }



int main() {
    int n, o;
    double m, l;
    string x;
    bool c;
    char y;

    n = 5; o = 7;
    m = 4.5; l = 2.342;
    x = "hola";
    c = false;
    y = 'g';

    cout << "Prueba de Funcion Cuadrado \n";
    cout << "Enteros: cuadrado de " << n << " - " << Cuadrado(n) << endl;
    cout << "Double : cuadrado de " << l << " - " << Cuadrado(l) << endl;
    std::cout << "Char: cuadrado de a " << Cuadrado('a') << std::endl;
    std::cout << "Bool: cuadrado de a "<< Cuadrado(false) << std::endl;

    cout << "Prueba de Funcion Mayores \n";
    cout << "Double: mayor " << numeroMayorFunc(m, l) << endl;
    cout << "Char  : mayor " << numeroMayorFunc(y, 'a') << endl;
    std::cout << "Int: mayor " << numeroMayorFunc(1, 0) << std::endl;
    std::cout << "Bool: mayor "<< numeroMayorFunc(true, false) << std::endl; 
    
    cout << "Prueba de Impresion de cadena \n";
    cout << "Impresion de String " << endl;     imprimeNVeces(n, x);
    cout << "Impresion de Bool " << endl;       imprimeNVeces(l, c);
    cout << "Impresion de Int " << endl;        imprimeNVeces(1, 0);
    cout << "Impresion de Double " << endl;     imprimeNVeces(true, false);
    return 0;
}
