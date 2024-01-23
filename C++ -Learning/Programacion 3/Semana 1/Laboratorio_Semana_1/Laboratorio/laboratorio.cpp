/* ***************************************
Ingrese en este espacio sus datos:
   Nombre: Jack Hollmann Lagos Mejia
   Numero de Registro: 32011727

***************************************** */


#include <iostream>
// #include <iomanip>
// #include <string>

// using std::cout;  
// using std::cin;  
// using std::endl;  
// using std::setprecision;  
// using std::setw;  
// using std::fixed; 
// using std::string;

int c = 0;






void Preguntar_Notas(int Lista_de_Notas[], int size){
    // Preguntar al usuario por las notas
    for(int i = 0; i < size; i++){
        std::cout << "Ingrese la nota #"<< i + 1 << '\n';
        std::cin >> Lista_de_Notas[i];
    }
}


double CalcularPromedio(int Lista_de_Notas[], int size){
    // Funcion que calcula promedios
    double promedio = 0;
    // calcular la suma total de las notas
    for(int i = 0; i < size; i++){
        promedio = Lista_de_Notas[i] + promedio;
    }
    // dividirlo por el tamaño de nuestra lista
    promedio = promedio / size;
    // retornar el valor de nuestro promedio
    return promedio;
}

std::string clasificar_por_promedio(int Promedio_Estudiante){
    std::string clasificacion;
    

    switch(Promedio_Estudiante){
        case 0 ... 69: clasificacion = "Reprobado"; 
        break;
        case 70 ... 74: clasificacion = "Regular"; 
        break;
        case 75 ... 84: clasificacion = "Bueno"; 
        break;
        case 85 ... 94: clasificacion = "Muy Bueno"; 
        break;
        case 95 ... 100: clasificacion = "Excelente"; 
        break;
    }


    return clasificacion;
}






double Calcular_Porcentaje_Asistencia_Anual(int Dias_Asistidos){
    const int AÑO_ESCOLAR = 200;
    double Porcentaje_Asistencia_Anual;

    
    Porcentaje_Asistencia_Anual = Dias_Asistidos * 100 / AÑO_ESCOLAR;
    return Porcentaje_Asistencia_Anual;
}


bool Va_A_La_Escuelita(double promedio){
    bool escuelita;
    if(promedio <= 69){
        escuelita = true;
    }
    else{
        escuelita = false;
    }

    return escuelita;
}


double Calcular_Bono_Otorgado_Excelencia(bool Bono_Por_Excelencia){
        if(Bono_Por_Excelencia == true){
            return 1000.00;
        }
        else{
            return 0.00;
        }   
}

double Calcular_Bono_Vacacional(int hermanos, int edad){
        double Valor_Del_Bono_Vacacional;
        // El valor del bono es equivalente a la edad multiplicada por Lps. 325.
        Valor_Del_Bono_Vacacional = edad * 325;
        if(hermanos == 0){
            return Valor_Del_Bono_Vacacional;
        }

        // En caso en que el estudiante tenga hermanos en la institución el bono se 
        // incrementa en un 5% por cada hermano hasta un tope de 20% (4 ó mas hermanos).
        else if(hermanos == 1){
                        // El 5%                    +   Valor del Bono Vacacional
            return (Valor_Del_Bono_Vacacional*0.5) + Valor_Del_Bono_Vacacional;
        }
        else if(hermanos == 2){
                        // El 10%                    +   Valor del Bono Vacacional
            return (Valor_Del_Bono_Vacacional*0.10) + Valor_Del_Bono_Vacacional;
        }
        else if(hermanos == 3){
                        // El 15%                    +   Valor del Bono Vacacional
            return (Valor_Del_Bono_Vacacional*0.15) + Valor_Del_Bono_Vacacional;
        }
        else if(hermanos >= 4){
                        // El 20%                    +   Valor del Bono Vacacional
            return (Valor_Del_Bono_Vacacional*0.20) + Valor_Del_Bono_Vacacional;
        }
        else{
            return -1;
        }
    }


void BubbleSort(int list[], int size){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(list[j] > list[j+1]){
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}



int main()
{
    
    //Inciso A:
    int Lista_de_Notas[4];
    int size = sizeof(Lista_de_Notas)/sizeof(Lista_de_Notas[0]);
    double promedio;
    int Total_Bonos;
    std::string clasificacion;
    //Inciso B:
    int Dias_Asistidos;
    double Porcentaje_Asistencia_Anual;
    //Inciso C:
    bool escuelita;
    //Inciso D:
    bool Bono_Por_Excelencia;
    double Bono_Otorgado_Excelencia;
    //Inciso E:
    bool Bono_Vacacional;
    bool Presento_Solicitud;
    char respuesta;
    int edad = 0;
    double Valor_Del_Bono_Vacacional; 
    int hermanos;
    //Inciso F:
    int Notas_De_Menor_a_Mayor[size];
    bool Aplica_Para_Tutorias;
    int Estudiantes;

    

    // ------------ H ------------------
    std::cout << "Ingrese la cantidad de estudiantes: " << '\n';
    std::cin >> Estudiantes;

    for(int k = 0; k < Estudiantes; k++){
        // ------------ A ------------------
        Preguntar_Notas(Lista_de_Notas, size);
        promedio = CalcularPromedio(Lista_de_Notas, size);
        std::cout << "El promedio del estudiante es: "<< promedio << "% , ";
        clasificacion = clasificar_por_promedio(promedio);
        std::cout << "Clasificacion: " << clasificacion << std::endl;
        // ------------ B ------------------
        std::cout << "Ingrese la cantidad de dias que asistio el estudiante:" << '\n';
        std::cin >> Dias_Asistidos;
        Porcentaje_Asistencia_Anual = Calcular_Porcentaje_Asistencia_Anual(Dias_Asistidos);
        std::cout << "El porcentaje de Asistencia anual es: ";
        std::cout << Porcentaje_Asistencia_Anual << std::endl;
        // ------------ C ------------------
        escuelita = Va_A_La_Escuelita(promedio);
        if(escuelita == true){
            std::cout << "El estudiante va a la escuelita." << '\n';
        }
        else{
            std::cout << "El estudiante no va a la escuelita." << '\n';
        }
        // ------------ D ------------------ 
        // Determinar si el estudiante tendra bono por excelencia
        if(Porcentaje_Asistencia_Anual > 90 && promedio >= 95){
            Bono_Por_Excelencia = true;
            std::cout << "Se asigno bono por Excelencia" << '\n';
        }
        else{
            Bono_Por_Excelencia = false;
            std::cout << "No se asigno bono por excelencia." << '\n';
        }
        // La variable *Bono_Otorgado_Excelencia* servira en un futuro.
        Bono_Otorgado_Excelencia = Calcular_Bono_Otorgado_Excelencia(Bono_Por_Excelencia); 
        if(Bono_Por_Excelencia == true){
            std::cout << "El bono por excelencia es: " << Bono_Otorgado_Excelencia << '\n';
        }
        else{
            std::cout << "El bono por excelencia es: "<< Bono_Otorgado_Excelencia << '\n';
        }
        // ------------ E ------------------
        // Le preguntamos en lenguaje humano "y/n" y guardamos en una boolean, porque el ejercicio asi lo pide.
        std::cout << "¿El alumno presento solicitud vacacional?" << '\n';
        std::cout << "y/n" << '\n';
        std::cin >> respuesta;
        if(respuesta == 'y'){
            Bono_Vacacional = true;
        }
        else{
            Bono_Vacacional = false;
        }
        // Se otorga a los alumnos que presentaron solicitud
        // y cuyo promedio anual fue mayor a 85%.
        if(Bono_Vacacional == true && promedio > 85){
            std::cout << "El estudiante SI aplica al *Bono Vacacional*" << '\n';
            // Preguntar por la Edad;
            while(c<=0){
                std::cout << "Ingrese una edad entre 5 y 17 anos: " << '\n';
                std::cin >> edad;
                if(edad >=5 && edad <= 17){
                    c = 1;
                }
                else{
                    c = 0;
                }
            }
            c = 0;
            std::cout << "¿Cuantos hermanos tiene?" << '\n';
            std::cin >> hermanos;
            // Hacer el calculo, dandole los parametros hermano y edad
            Valor_Del_Bono_Vacacional = Calcular_Bono_Vacacional(hermanos, edad);
            if(Valor_Del_Bono_Vacacional != -1){
                std::cout << "Valor del Bono Vacacional: " << Valor_Del_Bono_Vacacional << '\n';
            }
            else{
                std::cout << "Error al ingresar la cantidad de hermanos." << '\n';
            }
        }
        else{
            std::cout << "El estudiante NO aplica al *Bono Vacacional*" << '\n';
            while(c<=0){
                std::cout << "Ingrese una edad entre 5 y 17 anos: " << '\n';
                std::cin >> edad;
                if(edad >=5 && edad <= 17){
                    c = 1;
                }
                else{
                    c = 0;
                }
            }
            c = 0;
        } 
        //------------ F ------------------  
        for(int i = 0; i < size; i++){
            Notas_De_Menor_a_Mayor[i] = Lista_de_Notas[i];
        }
        BubbleSort(Notas_De_Menor_a_Mayor, size);
        if(Notas_De_Menor_a_Mayor[0] < 70 && Notas_De_Menor_a_Mayor[1] < 70){
            std::cout << "Las 2 notas mas bajas de este estudiante son: ";
            std::cout << Notas_De_Menor_a_Mayor[0] << ", " << Notas_De_Menor_a_Mayor[1] << "." << std::endl;
            Aplica_Para_Tutorias = true;
        }
        else{
            Aplica_Para_Tutorias = false;
        }
        (Aplica_Para_Tutorias == true && promedio < 70) ? Aplica_Para_Tutorias = true : Aplica_Para_Tutorias = false;
        std::cout << "Aplica para tutorias: ";
        Aplica_Para_Tutorias ? std::cout << "SI" << std::endl : std::cout << "NO" << '\n';


        // 4. Incluya dentro del programa los cálculos necesarios para incluir los totales pagados en los
        // diferentes bonos
        // Total: Bono_Otorgado_Excelencia + Valor_Del_Bono_Vacacional
        std::cout << "***********************" << '\n';
        std::cout << "\n ***** Factura ***** " << std::endl;
        std::cout << "Bono por Excelencia: " << Bono_Otorgado_Excelencia << '\n';
        std::cout << "Edad: "<< edad << '\n';
        std::cout << "Hermanos: "<< hermanos << '\n';
        std::cout << "Bono Vacacional: " << Valor_Del_Bono_Vacacional << '\n';
        Total_Bonos = Bono_Otorgado_Excelencia + Valor_Del_Bono_Vacacional;
        std::cout << "El total en todos los bonos es: "<< Total_Bonos << std::endl;


    }
 
 






   
    return 0;
}