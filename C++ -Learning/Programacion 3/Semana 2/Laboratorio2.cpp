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
			setNotas(newN1, newN2, newN3, newN4);
			reconocimiento = newRec;
			hermanos = newHnos;
			cout << "Inicializando clase con datos..." << endl;
		}
		
		
		
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

		int cuentaReprobados(){
			int reprobados = 0;
			if(nota[0]<=59){
				reprobados++;
			}
			if(nota[1]<=59){
				reprobados++;
			}
			if(nota[2]<=59){
				reprobados++;
			}
			if(nota[3]<=59){
				reprobados++;
			}
			return reprobados;
		}
			
			
		
		// metodo destructor
		~ALUMNO(){
		    cout << "Fin de objeto Alumno" << endl; 
		}
			

		// metodo que devuelve un valor especifico
			
		// metodo que ejecuta un procedimiento 
				
};
// fin de la clase


class MAESTRO{
	//clase para control de citas
	public:
		int numero;
		std::string docente;
		double sueldo;
		bool tutor;
		int estudiantes;
		int inP1, inP2, inP3, inP4; //Estudiantes o Alumnos
		double asistencias;

	// Metodo sin parametros
	public:
	MAESTRO(){
		std::cout << "Maestro creado sin datos." << '\n';
	}

	//Constructor sin parametros
	MAESTRO(int minumero, std::string midocente,double misueldo,bool mitutor, int alumnos){
			numero = minumero;
			docente = midocente;
			sueldo = misueldo;
			tutor = mitutor;
			estudiantes = alumnos;

	}


	
	void getDatos() {
			std::cout << std::endl ;
			std::cout << "Usando metodo getDatos()" << '\n';
			std::cout << "Numero de Docente \t" << numero << std::endl;
			std::cout << "Docente \t" << docente  << std::endl;
			std::cout << "Disponible para ser tutor \t" << tutor  << std::endl;           
			std::cout << "Sueldo Base \t" << sueldo << std::endl;
			std::cout << "Estudiantes asignados \t" << estudiantes  << std::endl;
		}

	
	void obtenerInformacion() {
			std::cout << std::endl ;
			std::cout << "Usando metodo obtenerInformacion()" << '\n';
			std::cout << "Numero de Docente \t" << getNumero()  << std::endl;
			std::cout << "Docente \t" << getDocente()  << std::endl;
			std::cout << "Disponible para ser tutor \t" << getTutor()  << std::endl;           
			std::cout << "Sueldo Base \t" << getSueldo() << std::endl;
			std::cout << "Estudiantes asignados \t" << getEstudiantes()  << std::endl;
		}

	//Get Methods
	int getNumero(){
		return numero;
	}
	std::string getDocente(){
		return docente;
	}
	bool getTutor(){
		return tutor;
	}
	double getSueldo(){
		return sueldo;
	}
	int getEstudiantes(){
		return estudiantes;
	}


	void setNumero(int nuevoNumero){
		numero = nuevoNumero;
	}
	void setsueldo(double nuevoValor){
		sueldo = nuevoValor;
	}	
	void setNombreDocente(std::string nuevoDocente){
		docente = nuevoDocente;
	}
	void setTutor(bool soyTutor){
		tutor = soyTutor;
	}



	void IncrementarSueldo(){
		double sueldoAnterior = sueldo;
		sueldo = sueldo * 1.1;
		std::cout << "El sueldo del maestro "<< docente << " paso de Lps. " << sueldoAnterior << "a Lps. " << sueldo << '\n';
	}

	void IncrementarSueldo(double sueldo){
		double sueldoAnterior = sueldo;
		sueldo = sueldo * 1.1;
		std::cout << "El sueldo del maestro "<< docente << " paso de Lps. " << sueldoAnterior << "a Lps. " << sueldo << '\n';
	}

	void OtorgarDescuento3a(){
		std::cout << "Este maestro tiene derecho a descuento por la tercera edad!" << '\n';
	}

	void setEstudiantes(int nuevoEstudiantes){
		estudiantes = nuevoEstudiantes;
	}

	

	double CalcularAsistencias(int inP1, int inP2, int inP3, int inP4){
		int Total_Inasistencias;//Total de Inasistencias al año
		const int  Dias_Clase = 200; //El año lectivo tiene 200 dias de clase
		Total_Inasistencias = inP1 + inP2 + inP3 + inP4;
		return Total_Inasistencias * 100 / Dias_Clase;
		// return Total_Inasistencias;
	}

	void getInasistencias(){

	}

	void setInasistencias(int P1, int P2, int P3, int P4){
		std::cout << CalcularAsistencias(P1, P2, P3, P4) << '\n';

	}



	//destructor
	~MAESTRO(){
	}


};


int main() {
	
	cout << fixed << setprecision(2) << setw(10); 
	
	// crear una instancia
	// ALUMNO Tomasito;
	MAESTRO Jirafales(1, "Jirafales", 12000, false, 29);
	MAESTRO Dumbledore;

	Jirafales.getDatos();
	
	Jirafales.obtenerInformacion();
	
	Dumbledore.setEstudiantes(15);
	
	Dumbledore.setNombreDocente("Dumbledore");
	Dumbledore.setsueldo(1000);
	Dumbledore.getDatos();

	std::cout << std::endl ;
	std::cout << "Numero de Docente \t" <<  Dumbledore.getNumero() << std::endl;
	std::cout << "Docente \t" << Dumbledore.getDocente() << std::endl;
	std::cout << "Disponible para ser tutor \t" << Dumbledore.getTutor() << std::endl;           
	std::cout << "Sueldo Base \t" << Dumbledore.getSueldo() << std::endl;
	std::cout << "Estudiantes asignados \t" << Dumbledore.getEstudiantes()  << std::endl;
		
	
	std::cout << "Inasistencias del primer parcial: " << Dumbledore.inP1 << '\n';
	Dumbledore.setInasistencias(5,6,4,5);
	// std::cout << "Porcentaje de Asistencia: "<< Dumbledore.CalcularAsistencias() << '\n';
	

	// llamar metodos con / sin parametro   
	// Tomasito.Bienvenido();
	// Tomasito.Bienvenido(10);
	// Tomasito.Bienvenido("Oscar");
	
	// Tomasito.getDatos();
	
	// probar constructor
	// ALUMNO Mariana("Maria", 90, "E", 78, 40, 59, 65, false, 1 );
	//		ALUMNO(string newNombre, int newPromedio, string newClase, int newN1, int newN2, int newN3, int newN4, bool newRec, int newHnos)  {
	
	// Mariana.getDatos();

    
    // Mariana.Bienvenido(25);
	// std::cout << "Clases reprobadas: "<< Mariana.cuentaReprobados() << '\n';

	
	
	
	
	return 0;
}

