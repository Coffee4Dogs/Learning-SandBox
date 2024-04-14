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

int main() {

    int cuenta;
    string nombre;
    double saldo;

    string texto;

    //std::fstream archivoEntrada {"Alumnos100.dat", ios::in};
	std::ifstream archivoEntrada;
	archivoEntrada.open("Clientes100.txt", ios::in);

    if (!archivoEntrada) {
        cerr << "No se puede abrir el archivo!";
        return 1;
    }


    archivoEntrada.seekg(0, ios::beg);
    //

    cout << "Posicion actual inicio " << archivoEntrada.tellg() << endl;
    cout << "\n" << archivoEntrada.tellg() << " es la posicion " << endl;
    getline(archivoEntrada, texto);
    // cout << " Su texto :" << texto << endl; 
    cout << "\n" << archivoEntrada.tellg() << " es la posicion " << endl;
    


    
    archivoEntrada.seekg(10, ios::cur); 
    //
    cout << "Posicion actual: " << archivoEntrada.tellg() << endl;
    
    archivoEntrada.seekg(-15, ios::end);
    //
    cout << "Posicion actual " << archivoEntrada.tellg() << endl;

    
    archivoEntrada.seekg(0, ios::beg);
    cout << "Posicion actual " << archivoEntrada.tellg() << endl;

    
    archivoEntrada.seekg(0, ios::end);
    //
        cout << "Posicion actual " << archivoEntrada.tellg() << endl;


    //archivoEntrada.seekp(0, ios::beg);
    //cout << "Posicion actual " << archivoEntrada.tellp() << endl;


    // Ubicarse en la posicion 500 con respecto al inicio para escribir
    // Ubicarse en la posicion 500 con respecto al inicio para leer
    // Ubicarse 500 posiciones atras del final para escribir
    // Ubicarse 500 posiciones atras del final para leer
    // Ubicarse 141 posiciones desde la posicion actual para escribir
    // Ubicarse 141 posiciones atras de la posicion actual para leer

    archivoEntrada.close();

    return 0;
}

