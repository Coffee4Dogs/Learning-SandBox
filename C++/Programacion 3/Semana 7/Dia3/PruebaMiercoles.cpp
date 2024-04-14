#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

using std::setw;
using std::setprecision;

using std::string;

void impresion(int , char[20], int, bool, double);   

int main() {


    std::ifstream archivoEntrada {"Prueba.txt", ios::in};
	
	// std::ifstream archivoEntrada;
	// archivoEntrada.open("Prueba.txt", ios::in);

    if (!archivoEntrada) {
        cerr << "No se puede abrir el archivo!";
        return 1;
    }  

    cout << fixed << showpoint ; 

/*
    if (encontrado) {
        cout << "Registro encontrado. Sus datos son: \n";
       
    }
    else {
        cout << "Registro no encontrado! \n";
    }
*/

	// b. leer todos los registros
    int numeroCuenta;
    char nombre[20];
    int edad;
    bool genero;
    double promedio;

    archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    while (!archivoEntrada.eof()) {
        //cout << "Datos: " << numeroCuenta << " " << nombre << " " << edad << " " << genero << " " << promedio << endl;
        impresion(numeroCuenta, nombre, edad, genero, promedio);
        archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    }
    archivoEntrada.close();
	    
	// d. buscar alumnos con edad mayor a una edad especifica
	archivoEntrada.open("Prueba.txt", ios::in);
    cout << "Busqueda de alumnos mayores a edad: " << endl;
    int edadConsultar;
    cout << "Ingrese una edad: ";
    cin >> edadConsultar;
    int totalR = 0;
// validar edadConsultar
    archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    while (!archivoEntrada.eof()) {
        if (edad > edadConsultar) {
            impresion(numeroCuenta, nombre, edad, genero, promedio);
            totalR++;
        }
        archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    }
    cout << "Total de Registros encontrados: " << totalR << endl;
    archivoEntrada.close();

	// e. buscar registros por nombre
    // comparar dos cadenas ==
    // nombreComparar.compare(nombre)
        //nombreComparar-lo que leo del usuario
        //nombre - campo leido desde el archivo
 
	// f. contar cantidad de alumnos y alumnas 
	cout << "Cuenta Alumnos y Alumnas " << endl;
    int varones = 0;
    int mujeres = 0;
    archivoEntrada.open("Prueba.txt", ios::in);
    archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    while (!archivoEntrada.eof()) {
        if (genero) {
            mujeres++;
        } else {
            varones++;
        }
        archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    }    
    cout << "Total Varones : " << varones << endl;
    cout << "Total Mujeres : " << mujeres << endl;
    archivoEntrada.close();
    
	// g. determinar tres promedios mas altos


    //Contenedor que ordene esto

	
	// h. contar registros
    
    // h2. agregar registros
    std::ofstream archivoEscribir {"Prueba.txt", ios::out | ios::app};
    
    std::cout << "Ingrese los datos: ";
    std::cin >> numeroCuenta >> nombre >> edad >> genero >> promedio;


    archivoEscribir << numeroCuenta << " " << nombre << " " << edad << " " << genero << " " << promedio << std::endl;
    archivoEscribir.close();
    

	// i. eliminar registros
	
	// j. actualizar un campo
	
	
   // archivoEntrada.close();

    return 0;
}

void impresion(int cuentaImprimir, char nombreImprimir[20], int edadImprimir, bool genImprimir, double promedioImprimir ) {
    //
    //cout << "Impresion " << endl;
    cout << setw(10) << left << cuentaImprimir << setw(20) << left << nombreImprimir << setw(3) << right << edadImprimir << setw(3) << right << (genImprimir?'F':'M') << setw(6) << right << setprecision(2) << promedioImprimir << endl; 
}
