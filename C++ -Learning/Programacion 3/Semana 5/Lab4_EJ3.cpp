// Defina una clase Alumno con los siguientes datos: nombre, edad, promedio. Defina métodos
// get y el método constructor. Relacione un número de cuenta (int) con una instancia de la
// clase Alumno. ¿Qué contenedor podría utilizar para lo anterior? Repita lo anterior 4 veces.
// a. Despliegue los números de cuenta del contenedor.
// b. Despliegue los números de cuenta y nombre del contenedor.
// c. Encuentre el promedio del alumno basado en una cantidad de alumnos ingresada
// por el usuario.


#include <iostream>
#include <algorithm>
#include <map>

using std::string;

using namespace std;

class ALUMNO{
    private:
        string nombre;
        int edad;
        double promedio;
    
    public:
        ALUMNO(string nombre, int edad, double promedio){
            this ->nombre =nombre;
            this ->edad = edad;
            // this ->promedio = promedio;
            SetPromedio(promedio);
            std::cout << "Alumno creado" << '\n';
        }

    void SetPromedio(double promedio){
        this->promedio = promedio;
    }

    string GetNombre(){
        return nombre;
    }

    int DevolverEdad(){
        return edad;
    }

    double GetPromedio(){
        return  promedio;
    }


};

int main() {

    map<int, ALUMNO> mRegistro;

    ALUMNO Anita("Anita", 20, 95.4);
    ALUMNO Emilio("Emilio", 22, 95.25);
    ALUMNO Federica("Federica", 23, 95.2);
    ALUMNO Julio("Julio", 20, 76.2);

    //Insert - make_pair
    mRegistro.insert(std::make_pair(313201, Anita));

    //emplace
    mRegistro.emplace(325632, Emilio);

    //Insert - pair
    mRegistro.insert(std::pair<int, ALUMNO> (25635, Federica));

    //desplegar numeros de cuenta (para recorrer el mapa)
    map<int, ALUMNO>::iterator iterMapa;

    for(iterMapa = mRegistro.begin(); iterMapa != mRegistro.end(); iterMapa++){
        std::cout << "NumCuenta: " << iterMapa -> first << '\n';
        std::cout << "Nombre: " <<iterMapa-> second.GetNombre() << '\n';
    }

    // Promedio para una cantidad de alumno
    int cantAlumnos;
    double promedioGeneral = 0;

    cout << "Ingrese una cantidad de Alumnos: ";
    cin >> cantAlumnos;

    iterMapa = mRegistro.begin();
    for(int i = 0; i < cantAlumnos; i++){
        promedioGeneral += iterMapa -> second.GetPromedio();
        iterMapa++;
    }

    promedioGeneral = promedioGeneral/cantAlumnos;
    std::cout << "Promedio " << promedioGeneral << '\n';

    //Encuentre un algoritmo que pudieramos aplicarle a este mapa.
    // el mapa es: mRegistro



    std::cout << "Fin del programa" << '\n';
    return 0;
}