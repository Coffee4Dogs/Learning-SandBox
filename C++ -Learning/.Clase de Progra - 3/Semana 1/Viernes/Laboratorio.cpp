/* ***************************************
Ingrese en este espacio sus datos:
Nombre:
Numero de Registro:
Complete este formulario: https://forms.office.com/r/vFMM0gwscX
odcuire@unitec.edu
Debe conectarse con la cuenta de correo de la universidad
***************************************** */
// Programacion III
// Seccion 89
// Librerias
#include <iostream>
#include <iomanip>
#include <string>


bool PasoONoPaso(bool calificacion){
    
    if (calificacion >= 0 && calificacion <= 69)
        {
            return true;   
        }

    else{
        return false;
    }
}

int main()
{
// declaracion de variables
int nota1, nota2, nota3, nota4;
std::string clasificacion;
bool escuelita;
// constantes
const int DIAS_CLASE = 200;
// acumuladores y contadores
int cantAlumEscuelita = 0;
int cantAlumBonoExcelencia = 0;
int cantAlumBonoVacacional = 0;
// cout << fixed << setprecision(2) << setw(10);
/* Ingreso de Datos Maestro */
// h. Ingrese una cantidad de alumnos
/* Ingreso de Datos Alumno */
/* Proceso y Calculos */
// a. Determinar el promedio de un alumno y clasificacion del promedio
// b. Determinar el porcentaje de asistencia anual de un alumno
// c. Determinar si un alumno va a la Escuelita.
// d. Determinar si un alumno tendra bono por Excelencia.
// e. Determinar el bono vacacional de un alumno.
// f. Determinar si un alumno aplica a tutoria.
// g. Valide que la edad de un alumno sea siempre entre 5 y 17 años
/* Salida de Datos para Estudiante */
/* Salida de Datos por Docente */
/* Salida de Datos Totales y Acumulados */





    // Para calcular un promedio hay obtener los datos del usuario
    int lista_notas[] = {nota1, nota2, nota3, nota4};
    int size =  sizeof(lista_notas)/sizeof(lista_notas[0]);

    std::cout << size << std::endl;

    
    // Pedirle datos al usuario
    for (int i = 0; i < size; i++)
    {
        std::cout << "Ingrese la nota: "<<i +1 << std::endl;  
        std::cin >> lista_notas[i]; 
    }

    
    // calcular promedio
    int calificacion = 0;
    for (int i = 0; i < size; i++){
        calificacion = calificacion + lista_notas[i];
        calificacion = calificacion / size;
    }
    std::cout << "Promedio: "<< calificacion << std::endl;
    

    PasoONoPaso(calificacion);
    
    

    return 0;
}