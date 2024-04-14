#include <iostream>
#include <string>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ios;
using std::ofstream; // output file stream
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
	
	cout << "Ingrese el nombre: " ;
	cin >> nombreArchivo;
	
	fstream archivoNotas;
	archivoNotas.open(nombreArchivo, ofstream::app);

	if(archivoNotas.is_open()){
		std::cout << "El Archivo se abrio correctamente!" << '\n';

		for (int i = 0; i <= 5; i++) {
			cout << "Numero de cuenta del alumno:  " << endl;
			cin >> cuenta;
			cout << "Nombre: " << endl;
			cin >> nombreAlumno;
			cout << "Acumulativo y examen:";
			cin >> acumulativo;
			std::cout << "Examen: " << '\n';
			cin >> examen;
			total = acumulativo  + examen;
			cout << "Transporte:";
			cin >> transporte;
			cout << "\nNota del alumno " << total << endl;
			archivoNotas << i << " " << cuenta << " "  << nombreAlumno << " " << acumulativo << " " << examen << " " << transporte << endl;
			cout << i << " " << cuenta << " "  << nombreAlumno << " " << total << " " << transporte << endl;
			archivoNotas << i << cuenta << nombreAlumno << total << endl;
	
		}

		archivoNotas.close(); //Si el archivo se abrio, lo cerramos.

	}

	
	// archivoNotas.open(nombreArchivo, fstream::in);
	
	
	
	return 0;
}
