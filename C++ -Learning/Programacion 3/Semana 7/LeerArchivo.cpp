#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;
using std::ifstream; // input file stream
using std::fstream;

/*
class Nota {
	
}*/
int main(){
	string nombreArchivo;
	
	int cuenta;
	string nombreAlumno;
	double acumulativo;
	double examen;
	double total;
	bool transporte;
	
	//cout << "Ingrese el nombre: " ;
	//cin >> nombreArchivo;
	nombreArchivo = "Alumnos.txt";
	
	ifstream archivoNotas;
	archivoNotas.open(nombreArchivo, ios::in);
	
	if (!archivoNotas) {
		cout << "Archivo no existe o no se creo!" << endl;
		return -1;
	} 
	
	int j;
	for (int i = 0; i <= 5; i++) {
		archivoNotas >> j >> cuenta >> nombreAlumno >> acumulativo >> examen >> transporte;

		cout << "Numero de cuenta del alumno:  " << cuenta << endl;
		cout << "Nombre: " << nombreAlumno << endl;
		cout << "Acumulativo y examen: " << acumulativo << " + " << examen << endl;
		total = acumulativo  + examen;
		cout << "Total: " << total << endl;
		cout << "Transporte:" <<  (transporte ? "Si" : "No") << endl;
		//cout << i << " " << cuenta << " "  << nombreAlumno << " " << total << " " << transporte << endl;
		//archivoNotas << i << cuenta << nombreAlumno << total << endl;
		cout << "**************\n";
	}
	
	
	archivoNotas.close();
	
	return 0;
}
