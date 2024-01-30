#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using std::cout;
using std::cin; 
using std::string;
using std::endl; 
using std::setprecision;
using std::setw;
using std::fixed;


int main() {
    double interesAnual, cuota, capital, interesMensual;
    int plazo;

    cout << fixed << setprecision(2) << setw(10);
    cout << "Ingreso de Datos " << endl;
    cout << "Ingrese la tasa de interes anual: " ;  //Tasa Interes Anual
    cin >> interesAnual;
    cout << "Ingrese la el monto de capital: " ; //A
    cin >> capital;
    cout << "Ingrese el plazo en meses: " ; //m
    cin >> plazo;        

    interesMensual = cuota = 0;

    return 0;
}
