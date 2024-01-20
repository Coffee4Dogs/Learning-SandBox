/******************************************************************************
Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP,
Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS,
JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.
*******************************************************************************/
// Numero de Cuenta: 32011727
// Nombre: Oscar F......
#include <iostream>
using namespace std;
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
cout<<"Cine" << endl;
// Solicitar datos y almacenar
cout << "Ingrese cantidad de amigos: "; cin >> amigos;
cout << "Ingrese cantidad de bebidas: "; cin >> cantidadBebidas;
cout << "Ingrese cantidad de palomitas: "; cin >> cantidadPalomitas;
cout << "Ingrese dia de semana: "; cin >> diaSemana;
cout << "Ingrese metodo de Pago: "; cin >> metodoPago;
// calculos
// comida palomitas / bebidas <= amigos
double totalComida;
if ((cantidadBebidas <= amigos) && (cantidadPalomitas <= amigos)){
totalComida = cantidadBebidas * precioBebida + cantidadPalomitas *
precioPalomitas;
}
else {
cout << "No puede comprar una cantidad mayor que la de sus amigos!! " <<
endl;
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
cout << "Total Comida " << totalComida << endl;
cout << "Total Entradas " << totalEntradas << endl;
cout << "Sub Total " << total << endl;
cout << "ISV " << (total * isv) << endl;
double totalDescuento;
if (metodoPago) {
} else {
}
cout << "Descuento " << (total * descuento) << endl;
cout << "Gran Total " << << endl;
// Escribir total
return 0;
}
