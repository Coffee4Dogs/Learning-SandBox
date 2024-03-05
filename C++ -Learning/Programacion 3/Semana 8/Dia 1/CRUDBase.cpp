#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <ostream>

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::copy;
using std::fixed;
using std::ios;
using std::left;
using std::right;
using std::showpoint;

using std::setw;
using std::setprecision;

using std::string;

using std::fstream;


void impresion(int , string , double ); 

class DatosCliente {
    private:
        int numeroCuenta;
        char nombre[10];
        double saldo;
        //int numCtaRelacionada;
    public:
        void setCuenta(int cuentaNueva) {
            numeroCuenta = cuentaNueva;
        };

        int getCuenta() {
            return numeroCuenta;
        };

        void setNombre(string nuevoNombre) {
            string valorNombre;
            int longitud = nuevoNombre.size();
            longitud = (longitud < 10 ? longitud : 9);
            nuevoNombre.copy(nombre, longitud);
            nombre[longitud] = '\0';
        };

        string getNombre() {
            return nombre;
        };

        void setSaldo(double nuevoSaldo) {
            saldo = nuevoSaldo;
        };

        double getSaldo() {
            return saldo;
        };

        //void setnumeroCuentaRelacionado(int);
        //double getnumeroCuentaRelacionado();
        //double getSaldoTodasCuentas();

        DatosCliente(int miCuenta = 0, string miNombre = "", double miSaldo = 0.0) {
            setCuenta(miCuenta);
            setNombre(miNombre);
            setSaldo(miSaldo);
        }


};

int main() {
    int cCuenta, opcion, cuentaBuscar;
    string cNombre;
    double cSaldo, nuevoSaldo;
    char res = 'S', confirmacion;
    bool encontrado;

    fstream ArchivoClientes100("Clientes100.dat",  ios::in | ios::out | ios::binary);

    // Prueba de Clase y sus metodos
/*    
    cout << "Cuenta : ";
    cin >> cCuenta;
    cout << "Nombre : ";
    cin >> cNombre;
    cout << "Saldo : ";
    cin >> cSaldo;        

    DatosCliente Prueba(cCuenta, cNombre, cSaldo);
    cout << "\n Los datos son " << Prueba.getCuenta() << " "  << Prueba.getNombre() << " " << Prueba.getSaldo() << endl;
*/    

    while ((res == 'S') || (res == 's')) {
        cout << " 1. Ingreso de Cliente \n";
        cout << " 2. Leer archivos Clientes \n";        
        cout << " 3. Consulta de Cliente \n";
        cout << " 4. Actualizacion de Cliente \n";
        cout << " 5. Borrado de Cliente \n";
        cout << " Ingrese su opcion: " ;
        cin >> opcion;

        switch (opcion) {
            case 1:
                {
                    cout << " Ingreso" << endl;
                    
                    cout << "Cuenta : " ;
                    cin >> cCuenta;
                    cout << "\nNombre: ";
                    cin >> cNombre;
                    cout << "\nSaldo: ";
                    cin >> cSaldo;

                }
                break;
            case 2:
                {
                    cout << " Leer Archivo" << endl; 
//                    cout << left << setw(10) << "Cuenta" << setw(10) << "Nombre" << right << setw(12) << "Saldo"  << fixed << showpoint << endl;
                }
                break;                 
            case 3:
                {
                    // leer la cuenta a bscar
                    cout << " Consulta" << endl; 

                }
                break;                
            case 4:
                {
                    cout << " Actualizacion" << endl;    

                       // cout << "Ingrese el nuevo saldo : " ;
                       // cin >> nuevoSaldo;
                       // ???.setSaldo(nuevoSaldo);
                       // ArchivoClientes100.seek???( (cuentaBuscar - 1) * sizeof(DatosCliente));  
                       // ArchivoClientes100.???(reinterpret_cast <const char *>(&???), sizeof(DatosCliente));
                       // cout << "Datos del cliente " << ???.getCuenta() << " han sido actualizados! " << endl;


                }                    
                break;                
            case 5:
                {
                    cout << " Eliminacion" << endl; 

                    cout << "Ingrese la cuenta a eliminar : " << endl;
                    cin >> cuentaBuscar;

                    //instrucciones para ir al inicio del archivo

                    // obtener posicion donde se encuentra el registro

                    // validar si existe o no el registro
                    if (registro encontrado ) {
                        //cout << "Seguro de confirmar la eliminacion (S/N) ? " ;
                        //cin >> confirmacion;
                        //if ((confirmacion == 'S') || (confirmacion == 's')) {
                        //    ArchivoClientes100.seek???( (cuentaBuscar - 1) * sizeof(DatosCliente));
                        //    DatosCliente ClienteVacio(9999,"XXXXXXXXXX", 9999.99);
                        //    ArchivoClientes100.write(reinterpret_cast <const char *>(&???), sizeof(DatosCliente));
                        //    cout << "\nCliente ha sido eliminado!" << endl;
                        //}
                        //else{
                        //    cout << "\nCliente no ha sido eliminado!" << endl;
                        //}


                    }
                    else{
                        cout << " Registro no encontrado " << endl;
                    }

                    //instrucciones para ir al inicio del archivo
                }
                break;
            default:
                {
                    cout << "Opcion No Valida!" << endl;
                    res = 'S';
                }
                break;
        }

        if ((opcion >=1 ) && (opcion <= 5)) {
            cout << "Desea continuar (S/N) ? " << endl;
            cin >> res;
        }

    }
    
    return 0;
}

void impresion(int cuentaImprimir, string nombreImprimir, double saldoImprimir) {
    cout << left << setw(10) << cuentaImprimir  << setw(13) << nombreImprimir << setw(12) << setprecision(2) << right << saldoImprimir << endl ;    
}
