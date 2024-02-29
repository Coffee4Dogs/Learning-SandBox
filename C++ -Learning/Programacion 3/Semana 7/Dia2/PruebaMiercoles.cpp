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
using std::fstream;

using std::setw;
using std::setprecision;

using std::string;

void impresion(int , char[20], int, bool, double);   

int main() {

    std::string address = "Prueba.txt";
    std::ifstream archivoEntrada {"Prueba.txt", ios::in};
	 
	// std::ifstream archivoEntrada;
	// archivoEntrada.open("Prueba.txt", ios::in);

    if (!archivoEntrada) {
        cerr << "No se puede abrir el archivo!"; //Es para imprimir errores creo...?
        return 1;
    }  

    
    cout << fixed << showpoint ; //desplegar el punto decimal 

    // if (encontrado) {
    //     cout << "Registro encontrado. Sus datos son: \n";
       
    // }
    // else {
    //     cout << "Registro no encontrado! \n";
    // }

	// b. leer todos los registros

    //Variables:
    int numeroCuenta; char nombre[20]; int edad; bool genero; double promedio;
    archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    

    // if(archivoEntrada.is_open()){
    //     while(!archivoEntrada.eof()){
    //         // std::cout << "Datos: " << numeroCuenta << " " << nombre << " " << edad << " " << genero << " " << promedio << '\n';
    //         impresion(numeroCuenta, nombre, edad, genero, promedio);
    //         archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;
    //     }
    //     archivoEntrada.close();
    // }

	// d. buscar alumnos con edad mayor a una edad especifica
	
    
    // std::cout << "-------------- Edad --------------" << '\n';
    // archivoEntrada.open(address , fstream::in);
    // if(archivoEntrada.is_open()){
    //     archivoEntrada >> numeroCuenta >> nombre >> edad;
    //     while(!archivoEntrada.eof()){
    //         archivoEntrada >> numeroCuenta >> nombre >> edad;
    //         std::cout << "Edad: " << edad << '\n';
    //     }
    //     archivoEntrada.close();
    // }

    fstream file;
    int id, age, temp_age;
    char name[20];
    bool genre;
    double average;


    temp_age = 0;
    file.open(address, fstream::in);
    if(file.is_open()){
        while(!file.eof()){
            
            //assign variables:
            file >> id >> name >> age >> genre >> average;
            //print:
            std::cout   << "ID: " << left << setw(8) << id  << " | "
                        << "Name: " << left << setw(10) << name << " | "
                        << "Age: " << left << setw(2) << age << " | "
                        << "Genre: " << left << setw(2) << (genre?'F':'M') << " | "
                        << "Average: " << left << setw(6) << setprecision(2)<< average << "  " 
                        << std::endl;

            
            (age > temp_age) ? temp_age = age : temp_age = temp_age;

            
        }
        
        // std::cout << "La edad mas alta en el registro es: " << temp_age << '\n';

        std::cout << "Ingrese la edad a comparar: " << '\n';
        int edad_comparar; cin >> edad_comparar;
        if(edad_comparar > temp_age){
            std::cout << "La edad mas grande es: " << edad_comparar << '\n';
        }
        else{
            std::cout << "La edad mas grande es: " << temp_age << '\n';
        }



        file.close();
    }



    
	// e. buscar registros por nombre
	
	// f. contar cantidad de alumnos y alumnas
    std::cout << "----------" << '\n';
    // int mujeres, varones;
    // archivoEntrada.open("Prueba.txt", ios::in);
    // if(archivoEntrada.is_open()){
    //     while(!archivoEntrada.eof()){
    //         archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;

    //         (genero) ? mujeres++ : varones++;
    //         archivoEntrada >> numeroCuenta >> nombre >> edad >> genero >> promedio;


    //     }

    //     std::cout << "Total Varones: "<< varones << '\n';
    //     std::cout << "Total Mujeres: "<< mujeres << '\n';
    //     archivoEntrada.close();
    // } 
	
	// g. determinar tres promedios mas altos
	
	// h. contar registros
	
	// i. eliminar registros
	
	// j. actualizar un campo
	
	
    
    return 0;
}

void impresion(int cuentaImprimir, char nombreImprimir[20], int edadImprimir, bool genImprimir, double promedioImprimir ) {
    std::cout << setw(10) << left << cuentaImprimir << setw(20) << left << nombreImprimir << setw(3) << edadImprimir << setw(3) << right << (genImprimir?'F':'M') << setw(6) << right << setprecision(2) << promedioImprimir << std::endl; 

}


