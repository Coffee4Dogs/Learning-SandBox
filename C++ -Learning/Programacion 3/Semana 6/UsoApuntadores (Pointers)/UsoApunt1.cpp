#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main() {
	// declaracion habitual de una variable
	// int num1 = 100; //Esta esta en el stack
	
	// // // declarar un espacio dinamico para una variable int con un valor de 100
	// new int(100); //Esta en el heap. (Memoria dinamica)
	
	// // // declarar un apuntador a un espacio dinamico para una variable int con un valor de 150
	// int *apunta150 = new int(150);
	
	// // // declarar un arreglo int de 100 posiciones
    // int arregloInt[100];
	
	// // // declarar un apuntador a un espacio dinamico para una variable con 100 posiciones de tipo int
	// int *apuntaArreglo100 = new int[100];

	// // std::cout << "El valor al cual apunta puntInt es " << *apunta150<< ; // operador de desreferencia
	// // std::cout << "El contenido del apuntador puntInt es " << apunta150;
	// // std::cout << "Un elemento de arregloInt "<< arregloInt[10]; 
	// // std::cout << "Un elemento de notas " << arregloInt[0]; 
    // // std::cout << "Un elemento de apuntaArr100 "<< apuntaArr100[10]; 
    // // std::cout << "El contenido del apuntador apuntaArr100 es "<< apuntaArr100; 
	// // std::cout << "El apuntador apunta150 se almacena en " << &apunta150 << '\n';
	
	// // std::cout << "Tamano es puntInt " <<  sizeof(apunta150) << " y  el de puntArrInt " <<  sizeof(apuntaArr100)   << std::endl;
	// // std::cout << "Tamano es *apunta150 " <<  sizeof(*apunta150)  << " y  el de *puntArr100 " <<   sizeof(*apuntaArr100)  << std::endl;


	// // // no dejar apuntador suelto
    // // //NULL
    
	
	// apunta150 = NULL;
	// apuntaArr100 = nullptr; //Null pointer

	// // std::cout << "El contenido del apuntador puntInt es " << *apunta150 << std::endl; 
	
	// //liberar memoria

	// delete apunta150;
	// delete []apuntaArr100;

	
	// std::cout << " Parte B \n" ; 
	
    // // declarar double y le asigna 20.8
	double num2 = 20.8; //(Metros)
	double **doubleApuntador = *punterodouble;

	// std::cout << "Direccion: " << &num2 << '\n';
	// std::cout << "Contenido: " << num2 << '\n';
	// std::cout << punterodouble << '\n';
	// std::cout << *punterodouble << '\n';
	// std::cout << "Contenido de dobleApuntador" << doubleApuntador << '\n';
	// std::cout << "Contenido de lo que apunta dobleApuntador:" << *(*doubleApuntador) << '\n';



	// //declarar dinamicamanente variable double con valor 20.8
	// double *pnum2 = new double(20.8);

	// std::cout << "Tamano " << sizeof(num2) << '\n';
	// std::cout << "Tamano punterodouble: " << sizeof(pnum2) << '\n';
	// std::cout << "Tamano *punterodouble: " << sizeof(*pnum2) << '\n';
	// //declarar un apuntador al apuntador creado en el paso anterior
	
	
	// // Desplegar contenido y referencias
	// cout << "Direccion de dblvar: " <<  ;
    // cout << "Contenido de dblvar: " <<  ;
    // cout << "Contenido de dblptr: " <<  ;
    // cout << "Contenido de lo que apunta dblptr: " <<  ;

	// // eliminar asignacion de memoria de apuntadores

	
	
	return 0;
}
