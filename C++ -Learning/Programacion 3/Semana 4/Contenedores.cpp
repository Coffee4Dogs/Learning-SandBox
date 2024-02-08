#include <iostream>
#include <string>
#include <numeric>  //Para Hacer algunos calculos numericos
#include <vector>   //Para crear vectores
#include <map>      //Para crear Mapas
#include <stack>    
#include <algorithm>

using namespace std;

int main() {

    // definir un arreglo con 6 numeros e inicializarlos
    int edades[6] = {24, 21, 20, 19, 18, 27};
	
	//recorrer el arreglo edades
    for (int i=0; i<= 5; i++) {
        cout << i << " " <<  edades[i] << endl;
    }
    
	// crear dos vectores
    vector<int> vEdades;
    vector<string> vNombres;

	// agregar 6 elementos a cada vector
    vEdades = {36, 25, 14, 30, 29, 21, 22};
    vNombres = {"Karina", "Lucas", "Mateo", "Pedro", "Matias", "Osman"};
 
	// ver el contenido del 3r y 4o elemento de los vectores 
    std::cout << "3ER contenido: "<<vEdades[3];
    std::cout << "4TO contenido: "<<vEdades[4] << std::endl;
    std::cout << "3ER contenido: "<<vNombres[4];
    std::cout << "4TO contenido: "<<vNombres[4] << std::endl;
	// ver el tama�o de los vectores
    std::cout << "Cantidad de elementos vEdades: " << vEdades.size() << '\n';
    std::cout << "Cantidad de elementos vNombres: " << vNombres.size() << '\n';

    // agregar nuevos elementos a los vectores
    vEdades.push_back(19);
    vEdades.push_back(26);
    vEdades.push_back(50);
    vNombres.push_back("Emilia");


	// ver el nuevo tama�o de los vectores
    std::cout << "Cantidad de elementos vEdades: " << vEdades.size() << '\n';
    std::cout << "Cantidad de elementos vNombres: " << vNombres.size() << '\n';

	// recorrer los vectores y ver el contenido

        std::cout << "Vector de vEdades:" << '\n';
        //Forma 1:
        for(int i = 0; i < vEdades.size(); i++){
            std::cout << "Index: "<< i <<" : "<< vEdades[i] << '\n';
        }

        std::cout << "Vector de vNombres:" << '\n';
        //Forma 2:
        for(int i = 0; i < vNombres.size(); i++){
            std::cout << "Index: "<< i <<" : "<< vNombres[i] << '\n';
        }
 
	// sacar 3 elementos de un vector

    sort(vEdades.begin(), vEdades.end());
    sort(vNombres.begin(), vNombres.end());


	// recorrer el vector despues de haber sacado esos elementos
        std::cout << "Despues de ser ordenados:" << '\n';
        std::cout << "Vector de vEdades:" << '\n';
        //Forma 1:
        for(int i = 0; i < vEdades.size(); i++){
            std::cout << "Index: "<< i <<" : "<< vEdades[i] << '\n';
        }

        std::cout << "Vector de vNombres:" << '\n';
        //Forma 2:
        for(int i = 0; i < vNombres.size(); i++){
            std::cout << "Index: "<< i <<" : "<< vNombres[i] << '\n';
        }
 
	// uso de algoritmo: ordenar un vector
	
    /* Mapa */
    cout << "Uso de Mapa " << endl;
    map<string, double> mNotas;
	map<bool, int> mPermisos;

	//verificar si el mapa esta vacio
    std::cout << "mNotas esta vacio: "<< mNotas.empty() << '\n';

	// map<string, double> mNotas;
    mNotas.insert(pair<string, double>("Ana", 95.2));
    mNotas.insert(pair<string, double>("Juan", 85.4));
    mNotas.insert(pair<string, double>("Mario", 59.9));
    mNotas.insert(pair<string, double>("Andres", 61.36));


	// insertar 4 pares de registros para el mapa1
   

	// insertar 2 pares de registros para el mapa2
    mPermisos.insert(pair<bool,int>(true,150));
    mPermisos.insert(pair<bool,int>(0,2000));
	
	// agregar un valor de manera directa 
    mNotas["Josefino"] = 88.7;
     
	// ver el tama�o del mapa
    std::cout << "Cantidad de elementos de mNotas"<< mNotas.size() << '\n';
	
    // crear un iterador de mapa
    map<string, double>::iterator iterNotas;

	// ver el contenido del mapa
    std::cout << "Recorriendo mNotas" << '\n';
    for(iterNotas = mNotas.begin(); iterNotas != mNotas.end(); iterNotas ++){
        std::cout << (*iterNotas).first() << " : " << (*iterNotas).last() << '\n';
    }


	// ver una de las notas del mapa    
	
	// cambiar un valor del mapa
 
	// ver nuevamente el contenido del mapa
 

	/* Pila */
	cout << "Uso de la pila" << endl;
    stack<int> sRegistros;
	
	// ingresar algunos elementos a la pila

	// ver el tama;o de la pila
    cout << "Tamano de la pila " << endl; 

	// acceder al 5o elemento de la pila
	
	// sacar 2 elementos de la pila
 
	// ver el nuevo tama;o de la pila
    cout << "Tamano de la pila despues de sacar " <<  endl; 

    return 0;
}
