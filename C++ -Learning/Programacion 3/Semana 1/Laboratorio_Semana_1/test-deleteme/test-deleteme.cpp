#include <iostream>

int main() {
    
    double Tabla1[2][5] = {{}};
    int Tabla1_Rows = sizeof(Tabla1)/sizeof(Tabla1[0]);
    int Tabla1_Columns = sizeof(Tabla1[0])/sizeof(Tabla1[0][0]);


    //Declarar Variables
    double promedio, Porcentaje_Asistencia_Anual, Bono_Otorgado_Excelencia, Valor_Del_Bono_Vacacional, Total_Bonos;
    //Asignar Valores
    promedio = 8923.23;
    Porcentaje_Asistencia_Anual = 9823;
    Bono_Otorgado_Excelencia = 232.23;
    Valor_Del_Bono_Vacacional = 28972.2398;
    Total_Bonos = 3234.23;

    // Guardar en Registros
        //Tabla 1 almacena las variables double.
        // Tabla1[0][0] = promedio;
        // Tabla1[0][1] = Porcentaje_Asistencia_Anual;
        // Tabla1[0][2] = Bono_Otorgado_Excelencia;
        // Tabla1[0][3] = Valor_Del_Bono_Vacacional;
        // Tabla1[0][4] = Total_Bonos;

        Tabla1[0][0] = 1;
        Tabla1[0][1] = 1;
        Tabla1[0][2] = 1;
        Tabla1[0][3] = 1;
        Tabla1[0][4] = 1;

        Tabla1[1][0] = 2;
        Tabla1[1][1] = 2;
        Tabla1[1][2] = 2;
        Tabla1[1][3] = 2;
        Tabla1[1][4] = 2;





    for(int i = 0; i < Tabla1_Rows; i++){
        for(int j = 0; j < Tabla1_Columns; j++){
            std::cout << Tabla1[i][j] << ", ";
        }
        std::cout << "\n";
    }

    return 0;
}