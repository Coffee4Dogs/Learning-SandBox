// Laboratorio # 2
// Nombre y numero de cuenta:

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

class MAESTRO {
    //clase para control de citas

    // 11.         
    public:
        int numero;
        string docente;
        double sueldo; 
        bool tutor; 
        int estudiantes;
        int inP1, inP2, inP3, inP4;
        double asistencias;
        // 15.
        // 17.  
    
    public:               
        MAESTRO() { // constructor sin parametros
        // 4.
		cout << "Maestrocreado sin datos!" << endl;   
        } 

        //MAESTRO(int minumero = 0, string midocente = "Maestro ABC", double misueldo = 8000.0, bool mitutor = true, int alumnos = 1)  {
		MAESTRO(int minumero , string midocente , double misueldo , bool mitutor, int alumnos )  {
			numero = minumero; // 
            docente = midocente;
            sueldo = misueldo;
            tutor = mitutor;
            estudiantes = alumnos;
        }
		               
        void getDatos() {
            cout << endl ;
            cout << "Numero de Docente \t" << numero << endl;
            cout << "Docente \t" << docente << endl;
            cout << "Disponible para ser Tutor \t" << tutor << endl;
            cout << "Sueldo Base \t" << sueldo << endl;
            cout << "Estudiantes asignados \t" << estudiantes << endl;
        }

        // getters y setters      
        
        void setNumero(int nuevoNumero) {
            numero = nuevoNumero;
        }

        void setsueldo(double nuevoValor) {
            sueldo = nuevoValor;
        }
        
        void setNombreDocente(string nuevoDocente) {
            docente = nuevoDocente;
        }
        
        int getNumero() {
            return numero;
        }

        double getSueldo() {
            return sueldo;
        }
        
        string getDocente(){
            return docente;
        }
        
        
        void setTutor(bool soyTutor){
            tutor = soyTutor;
        }

        
        bool getTutor() {
            return tutor;
        }
       
        
        void IncrementarSueldo() {
            double sueldoAnterior = sueldo;            
            sueldo = sueldo * 1.1;
            cout << " El sueldo del Maestro " << ocente << " paso de Lps. " << sueldoAnterior << " a  Lps." << sueldo << endl;
        }     

        void IncrementarSueldo(double aumento){
        // 5. 
			cout << "Sueldo anterior: " << '\n';
			sueldo += cantidadIncrementar;
			cout << "Sueldo nuevo: "<< sueldo << '\n';
		}
		
		void OtorgarDescuento3a() {
			cout << endl << "Este maestro tiene derecho a descuento por la tercera edad! \n"; 
		};

        int getEstudiantes() {
        // 8. 
        }

        void setEstudiantes(int nuevoEstudiantes){
        // 8. 
        }

        // 9.
};
// fin de la clase

int main() {



    cout << fixed << setprecision(2) << setw(10);
    // 3.
	MAESTRO Jirafales.(1, "Jirafales", 12000, false, 29);
    // 6. 
	MAESTRO Dumbledore;
    // 7. 
	
    return 0;
}
