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


//Calculo de interes = //Tasa de interes
//                     (360 * 12)
//                         365


double CalculoInteresAnual (double TasaInteresAnual){
    return TasaInteresAnual / ((360*12) / 365);
}


double CalculoCuotaNivelada(double Capital, int Plazo, double TasaInteresAnual){
    
    double Exponente = pow((1 + TasaInteresAnual), (-1 * Plazo));
    
    return ((Capital * TasaInteresAnual) / 1 - Exponente);
     


}





int main() {
    double TasaInteresAnual, Cuota, Capital, InteresMensual;
    int Plazo;

    cout << fixed << setprecision(2) << setw(10);
    cout << "Ingreso de Datos " << endl;
    
    //...Parte 1
    cout << "Ingrese la tasa de interes anual: " ;  //Tasa Interes Anual
    cin >> TasaInteresAnual;
    InteresMensual = CalculoInteresAnual(TasaInteresAnual);
    std::cout << "Tasa Interes Mensual: " << InteresMensual << '\n';

    //...Parte 2
    cout << "Ingrese la el monto de capital: " ; //A
    cin >> Capital;
    cout << "Ingrese el plazo en meses: " ; //m
    cin >> Plazo;       
    Cuota = CalculoCuotaNivelada(Capital, Plazo, TasaInteresAnual);
    std::cout << "Cuota: " << Cuota << '\n';


    // interesMensual = cuota = 0;
    //esto es un cambio
    return 0;
}
