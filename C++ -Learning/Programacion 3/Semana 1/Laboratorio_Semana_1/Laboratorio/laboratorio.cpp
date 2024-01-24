/* ***************************************
Ingrese en este espacio sus datos:
   Nombre: Jack Hollmann Lagos Mejia
   Numero de Registro: 32011727

***************************************** */


#include <iostream>
#include <ctime>

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
int Estudiantes;
char porc = '%';
const int AÑO_ESCOLAR = 200;





// Preguntar las notas
void Preguntar_Notas(int Lista_de_Notas[], int size){
    // Preguntar al usuario por las notas
    for(int i = 0; i < size; i++){
        std::cout << "Ingrese la nota #"<< i + 1 << '\n';
        std::cin >> Lista_de_Notas[i];
    }
}

// Calcula promedios si le damos una lista con notas y el tamaño de la lista
double CalcularPromedio(int Lista_de_Notas[], int size){
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

// clasifica los promedios con nombres
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

// Calcula porcentaje de asistencia anual si le damos el parametro dias asistidos
double Calcular_Porcentaje_Asistencia_Anual(int Dias_Asistidos){
    double Porcentaje_Asistencia_Anual;

    
    Porcentaje_Asistencia_Anual = Dias_Asistidos * 100 / AÑO_ESCOLAR;
    return Porcentaje_Asistencia_Anual;
}

// convierte el promedio a un retorno booleano
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

//Calcula el bono otorgado si tiene la boolean (Bono_Por_Excelencia)
double Calcular_Bono_Otorgado_Excelencia(bool Bono_Por_Excelencia){
        if(Bono_Por_Excelencia == true){
            return 1000.00;
        }
        else{
            return 0.00;
        }   
}

//Clasifica cuanto aumenta el bono vacacional segun los parametros (hermanos, edad)
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

//Algoritmo de ordenamiento burbuja
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

//Caja de saludos
std::string rand_answer(int x){
    //Cambiando la semilla de los numeros random por la hora del sistema.
    
    switch(x){
        case 1: return "¡Vamooooo!\n";  break;
        case 2: return "Perfecto. ^.^ \n"; break;
        case 3: return "Naci mas que listo.\n"; break;
        case 4: return "Excelente. Siiuuuu...\n";  break;
        case 5: return "Ok.    :)\n"; break;
        case 6: return ":~ $ sudo apt-get update\n"; break;
    }
}


int main()
{
    
    //Inciso A:
    int Lista_de_Notas[4];
    int size = sizeof(Lista_de_Notas)/sizeof(Lista_de_Notas[0]);
    double promedio;
    double Total_Bonos;
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
    // bool Presento_Solicitud;
    char respuesta;
    int edad = 0;
    double Valor_Del_Bono_Vacacional; 
    int hermanos;
    //Inciso F:
    int Notas_De_Menor_a_Mayor[size];
    bool Aplica_Para_Tutorias;
    
    
    // ------------ H ------------------
    std::cout << "Ingrese la cantidad de estudiantes: " << '\n';
    std::cin >> Estudiantes;
    
    // Una tabla para cada tipo de variable.

    // Tabla1: promedio, Porcentaje_Asistencia_Anual, Bono_Otorgado_Excelencia, Valor_Del_Bono_Vacacional , Total_Bonos
    double Tabla1[Estudiantes][5] = {{}};
    int Tabla1_Rows;
    int Tabla1_Columns;

    //Tabla2: escuelita, Bono_Por_Excelencia, Bono_Vacacional, Aplica_Para_Tutorias
    bool Tabla2[Estudiantes][4] = {{}};
    int Tabla2_Rows;
    int Tabla2_Columns;

    //Tabla3: k (#Numero de estudiante), Dias_Asistidos, edad, hermanos
    int Tabla3[Estudiantes][4] = {{}};
    int Tabla3_Rows;
    int Tabla3_Columns;

    //Tabla4 (En caso de querer guardar las notas tambien, se puede hacer otra tabla que almacene las notas.)
    //Creo que ya es mucha informacion asi que estos registros no los voy a guardar. Asumo que ya los tiene el docente.
    
    
    //Saludo
    //Esto me va a dar un numero random entre 1 - 6.
    srand(time(NULL));
    int random_number1 = (rand() % 6)+1;
    int random_number2 = (rand() % 6)+1;
    std::string saludo;
    
    for(int k = 0; k < Estudiantes; k++){
        saludo = rand_answer(random_number1);
        
        std::cout << saludo << '\n';
        
        std::cout << "\n" << "Estudiante numero #"<< k + 1 << std::endl;

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
        std::cout << Porcentaje_Asistencia_Anual << porc << std::endl;
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
        else if(respuesta == 'n'){
            Bono_Vacacional = false;
        }
        else{
            Bono_Vacacional =false;
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
        if( (Notas_De_Menor_a_Mayor[0] < 70)  &&  (Notas_De_Menor_a_Mayor[1] < 70) ){
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
        std::cout << "Estudiante: #"<< k+1 << '\n';
        std::cout << "Bono por Excelencia: " << Bono_Otorgado_Excelencia << '\n';
        std::cout << "Edad: "<< edad << '\n';
        std::cout << "Hermanos: "<< hermanos << '\n';
        std::cout << "Bono Vacacional: " << Valor_Del_Bono_Vacacional << '\n';
        Total_Bonos = Bono_Otorgado_Excelencia + Valor_Del_Bono_Vacacional;
        std::cout << "El total en todos los bonos es: "<< Total_Bonos << std::endl;


        // Guardar en Registros
            //Tabla 1 almacena las variables double.
            // Tabla1: promedio, Porcentaje_Asistencia_Anual, Bono_Otorgado_Excelencia, Valor_Del_Bono_Vacacional , Total_Bonos
        Tabla1[k][0] = promedio;
        Tabla1[k][1] = Porcentaje_Asistencia_Anual;
        Tabla1[k][2] = Bono_Otorgado_Excelencia;
        Tabla1[k][3] = Valor_Del_Bono_Vacacional;
        Tabla1[k][4] = Total_Bonos;
        
        // Guardar en Registros
            //Tabla 2 almacena las variables bool.
            //Tabla2: escuelita, Bono_Por_Excelencia, Bono_Vacacional, Aplica_Para_Tutorias
        Tabla2[k][0] = escuelita;
        Tabla2[k][1] = Bono_Por_Excelencia;
        Tabla2[k][2] = Bono_Vacacional;
        Tabla2[k][3] = Aplica_Para_Tutorias;

        // Guardar en Registros
            // Tabla3 almacena las variables int.
            //Tabla3: k (ID o Numero de estudiante), Dias_Asistidos, edad, hermanos
        Tabla3[k][0] = k+1; //K vale 0 inicialmente. Vamos a suponer que nuestro primer ID sea 1.
        Tabla3[k][1] = Dias_Asistidos;
        Tabla3[k][2] = edad;
        Tabla3[k][3] = hermanos;


    }
    
    

    
    


    //Leer el tamaño de las tablas
    Tabla1_Rows = sizeof(Tabla1)/sizeof(Tabla1[0]);
    Tabla1_Columns = sizeof(Tabla1[0])/sizeof(Tabla1[0][0]);
    Tabla2_Rows = sizeof(Tabla2)/sizeof(Tabla2[0]);
    Tabla2_Columns = sizeof(Tabla2[0])/sizeof(Tabla2[0][0]);
    Tabla3_Rows = sizeof(Tabla3)/sizeof(Tabla3[0]);
    Tabla3_Columns = sizeof(Tabla3[0])/sizeof(Tabla3[0][0]);

    // Imprimir Tablas
        // Double
            // Tabla1: promedio, Porcentaje_Asistencia_Anual, Bono_Otorgado_Excelencia, Valor_Del_Bono_Vacacional , Total_Bonos
        // Boolean
            // Tabla2: escuelita, Bono_Por_Excelencia, Bono_Vacacional, Aplica_Para_Tutorias
        // Int
            // Tabla3: k (ID o Numero de estudiante), Dias_Asistidos, edad, hermanos
    
    saludo = rand_answer(random_number2);
    std::cout << saludo << '\n';
    std::cout << "\n---- Tabla de Registros ---" << std::endl;
    for(int i = 0; i < Estudiantes; i++){
        std::string clas_temp;
        std::cout << "Estudiante #"<< Tabla3[i][0];
        std::cout << " | Promedio: "<< Tabla1[i][0];
        clas_temp = clasificar_por_promedio(Tabla1[i][0]); std::cout << " | Clasificacion: "<< clas_temp;
        std::cout <<" | Asistencia Anual: "<< Tabla1[i][1] << porc;
        std::cout << " | Escuelita: "; (Tabla2[i][0]) ? std::cout << "Si" : std::cout << "No";
        std::cout << " | Bono Excelencia: "; (Tabla3[i][1]) ? std::cout << "Si" : std::cout << "No";
        std::cout << " | Cant. Bono Excelencia: "<< Tabla1[i][2];
        std::cout << " | Edad: "<< Tabla3[i][2];
        std::cout << " | Hermanos: "<< Tabla3[i][3];
        std::cout << " | Cant. Bono Vacacional: "<< Tabla3[i][3];
        std::cout << " | Tutorias: "; (Tabla2[i][3]) ? std::cout << "Si" : std::cout << "No";
        std::cout << " | Total en Bonos: "<< Tabla1[i][4];
        std::cout << "\n--------------------------------------------" << std::endl;


        std::cout << "\n";
    }




    return 0;
}