#include <iostream>
#include <string>
#include <iomanip>

//using namespace std;
using std::cout;
using std::cin; 
using std::string;
using std::endl; 
using std::setprecision;
using std::setw;
using std::fixed;


class ALUMNO {
	//clase para control de alumnos
		
	public: 
		string nombre;
		int promedio;
		string clasificacion;
		int nota[4];
		bool reconocimiento; 
		int hermanos;
		
		// constructor sin parametros
		ALUMNO() { 
			cout << "Inicializa sin datos.... " << endl;
		}
		
		// constructor
		ALUMNO(string newNombre, int newPromedio, string newClase, int newN1, int newN2, int newN3, int newN4, bool newRec, int newHnos)  {
			nombre = newNombre;
			promedio = newPromedio;
			clasificacion = newClase;
			/* incluir la asignacion de notas */
			reconocimiento = newRec;
			hermanos = newHnos;
			cout << "Inicializando clase con datos..." << endl;
		}
		
		// constructor con parametros por defecto
		
		// 
		
		void getDatos() {
			cout << endl ;
			cout << "Alumno \t" << nombre  << endl;
			cout << "Promedio \t" << promedio  << endl;
			cout << "Clasificacion \t" << clasificacion << endl;
			cout << "Reconocimiento \t" << reconocimiento  << endl;           
			cout << "Hermanos \t" << hermanos  << endl;
		}
		
		void Bienvenido() { 
			cout << "Bienvenido a la clase Alumno !!!" << endl;
		}   
		
		void Bienvenido(string usuario) {
			cout << "Bienvenido a la clase Alumno, " << usuario << "!!!" << endl;
		}
		
		void Bienvenido(int veces){
			cout << "Bienvenido " << endl;
			for (int i = 0; i< veces;i++) {
				cout << "*" << " " ;
			}
			cout << endl << " a la clase Alumno!!!" << endl;
		}
		
		// metodos getters
		
		string getNombre(){
			return nombre;
		}
		
		int getPromedio() {
			return promedio;
		}
		
		int getNota(int parcial) {
			switch(parcial){
			case 1 : return nota[0]; 
			break;
			case 2: return nota[1];
			break;
			case 3: return nota[2];
			break;
			case 4: return nota[3];
			break;
			default: return -1;
			break;
			}
		}
		

		void setNombre(string newNombre){
			nombre = newNombre;
		}
		
		void setPromedio(int newPromedio) {
			promedio = newPromedio;
		}
		
		void setNotas(int newN1, int newN2, int newN3, int newN4) {
			// asigna 4 notas y calcula promedio
			nota[0] = newN1;
			//
			promedio = (nota[0]+nota[1]+nota[2]+nota[3])/4;
		}
			
			
		
		// metodo destructor
		~ALUMNO(){
		    cout << "Fin de objeto Alumno" << endl; 
		}
			
		// metodo que devuelve un valor especifico
			
		// metodo que ejecuta un procedimiento 
				
};
// fin de la clase

int main() {
	
	cout << fixed << setprecision(2) << setw(10); 
	
	// crear una instancia
	ALUMNO Tomasito;
	
	// llamar metodos con / sin parametro   
	Tomasito.Bienvenido();
	Tomasito.Bienvenido(10);
	Tomasito.Bienvenido("Oscar");
	
	Tomasito.getDatos();
	
	// probar constructor
	ALUMNO Mariana("Maria", 90, "E", 90, 90, 90, 90, false, 1 );
	//		ALUMNO(string newNombre, int newPromedio, string newClase, int newN1, int newN2, int newN3, int newN4, bool newRec, int newHnos)  {

    Mariana.getDatos();
    
    Mariana.Bienvenido(25);
	
	// probar metodo getDatos
	


	// get y set
	
	
	// pasando valores desde variables a instancia
	
	
	// diferenciando private y public
	
	
	
	return 0;
}

// commit
// after