/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP,
Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS,
JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
// Numero de Cuenta: 32011727
// Nombre: Jack Hollmann Lagos Mejia
#include <iostream>


int main()
{
int amigos;
double precioEntrada = 95;
double precioBebida = 50;
double precioPalomitas = 150;
int cantidadBebidas, cantidadPalomitas;
char diaSemana; // L, M, X, J, V, S, D
bool metodoPago; // true efectivo false tarjeta
double total;
const double isv = 0.15;
const double descuento = 0.1;
// palomitas y bebidas no excedan cantidad de amigos
std::cout << "Cine" << std::endl;

// Solicitar datos y almacenar
std::cout << "Ingrese cantidad de amigos: " << 
std::endl; 
std::cin >> amigos;
std::cout << "Ingrese cantidad de bebidas: "; 
std::cin >> cantidadBebidas;
std::cout << "Ingrese cantidad de palomitas: "; 
std::cin >> cantidadPalomitas;
std::cout << "Ingrese dia de semana: "; 
std::cin >> diaSemana;
std::cout << "Ingrese metodo de Pago: "; 
std::cin >> metodoPago;

// calculos
// comida palomitas / bebidas <= amigos
double totalComida;
if ((cantidadBebidas <= amigos) && (cantidadPalomitas <= amigos)){
totalComida = cantidadBebidas * precioBebida + cantidadPalomitas *
precioPalomitas;
}
else {
std::cout << "No puede comprar una cantidad mayor que la de sus amigos!! " << std::endl;
totalComida = 0;
}
// entradas: lunes mitad de precio
double totalEntradas;
if (diaSemana == 'L'){
totalEntradas = precioEntrada / 2 * amigos;
} else {
totalEntradas = precioEntrada * amigos;
}

total = totalComida + totalEntradas;
std::cout << "Total Comida " << totalComida << std::endl;
std::cout << "Total Entradas " << totalEntradas << std::endl;
std::cout << "Sub Total " << total << std::endl;
std::cout << "ISV " << (total * isv) << std::endl;
double totalDescuento;


if (metodoPago) {
    totalDescuento = total * descuento;
} 

else {
    totalDescuento = 0;
}

std::cout << "Descuento " << (total * descuento) << std::endl;
total = totalEntradas + totalComida - totalDescuento;

std::cout << "Gran Total " << total << std::endl;
// Escribir total



return 0;
}
