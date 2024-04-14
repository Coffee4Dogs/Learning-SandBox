/* ***************************************
Ingrese en este espacio sus datos:
   Nombre: Jack Hollmann Lagos Mejia
   Numero de Registro: 32011727

***************************************** */

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


void impresion(int , string , double, int ); 

class DatosCliente{
    private:
        int numeroCuenta;
        char nombre[10];
        double saldo;
        int numCtaRelacionada;
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

        void setnumeroCuentaRelacionado(int numCtaRelacionada){
            this-> numCtaRelacionada = numCtaRelacionada;
        }

        double getnumeroCuentaRelacionado(){
            return this-> numCtaRelacionada;
        }

        DatosCliente(int miCuenta = 0, string miNombre = "", double miSaldo = 0.0, int numCtaRelacionada = 0) {
            setCuenta(miCuenta);
            setNombre(miNombre);
            setSaldo(miSaldo);
            this->numCtaRelacionada = numCtaRelacionada;
        }

};

int main() {
    int cCuenta, opcion, cuentaBuscar, cRelacionado;
    string cNombre;
    double cSaldo, nuevoSaldo;
    char res = 'S', confirmacion;
    bool encontrado;

    //Flag
    fstream ArchivoClientes100("Clientes100.odc",  ios::in | ios::out | ios::binary);

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
                    cout << "Numero Cuenta relacionado" << endl;
                    cin >> cRelacionado;

                    DatosCliente CNuevo(cCuenta, cNombre, cSaldo, cRelacionado);

                    cout << "Clase Datos Cliente mide " << sizeof(DatosCliente) << endl;
                    // cada registro mide 24 bytes
                    
                    ArchivoClientes100.clear();
                    ArchivoClientes100.seekp(0, ios::beg);


                    ArchivoClientes100.seekp((CNuevo.getCuenta()-1)*sizeof(DatosCliente), ios::beg);
                    cout << "El registro " << CNuevo.getCuenta() << " se almacenara en la pos " << ArchivoClientes100.tellp() << endl;

                    ArchivoClientes100.write(reinterpret_cast <const char *>(&CNuevo), sizeof(DatosCliente));

                    


                    //ArchivoClientes100 << cCuenta << " " << cNombre << " " << .....
                    //
                }
                break;
            case 2:
                {
                    cout << " Leer Archivo" << endl; 
                    cout << left << setw(10) << "Cuenta" << setw(10) << "Nombre" << right << setw(12) << "Saldo"  << fixed << showpoint << endl;

                    ArchivoClientes100.seekg(0 , ios::beg);
                    DatosCliente CLeer(888, "YYY", 0.00, 23);

                    cout << "Pos leer: " << ArchivoClientes100.tellg() << endl;
                    ArchivoClientes100.read(reinterpret_cast <char *>(&CLeer), sizeof(DatosCliente));
                    //ArchivoClientes100.write(reinterpret_cast <const char *>(&CNuevo), sizeof(DatosCliente));

                    while (ArchivoClientes100 && !ArchivoClientes100.eof()) {
                        if(CLeer.getCuenta() != 9999){
                            impresion(CLeer.getCuenta(), CLeer.getNombre(), CLeer.getSaldo(), CLeer.getnumeroCuentaRelacionado());
                        }
                        
                        cout << "Pos leer: " << ArchivoClientes100.tellg() << endl;
                        ArchivoClientes100.read(reinterpret_cast <char *>(&CLeer), sizeof(DatosCliente));
                    
                    }

                }
                break;                 
            case 3:
                {
                    // leer la cuenta a buscar

                    DatosCliente CCons(888, "YYY", 0.00);
                    ArchivoClientes100.clear();
                    cout << " Consulta" << endl;
                    std::cout << "Ingrese cuenta a buscar: " << std::endl;
                    
                    //validar
                    ArchivoClientes100.seekg(0, ios::beg);
                    ArchivoClientes100.seekg(cuentaBuscar-1 * sizeof(DatosCliente) ,ios::beg);
                    ArchivoClientes100.read(reinterpret_cast <char *>(&CCons), sizeof(DatosCliente));

                    if (CCons.getCuenta() != 9999){
                        
                        impresion(CCons.getCuenta(), CCons.getNombre(), CCons.getSaldo(), CCons.getnumeroCuentaRelacionado());
                    }
                    else{
                        std::cout << "Registro no encontrado." << std::endl;
                    }
                    
                    
                    



                }
                break;                
            case 4:
                {
                    cout << " Actualizacion" << endl;    
                    

                    DatosCliente CCons(888, "YYY", 0.00);
                    ArchivoClientes100.clear();
                    cout << " Consulta" << endl;
                    std::cout << "Ingrese cuenta para actualizar su saldo. " << std::endl;
                    
                    //validar
                    ArchivoClientes100.seekg(0, ios::beg);
                    ArchivoClientes100.seekg(cuentaBuscar-1 * sizeof(DatosCliente) ,ios::beg);
                    ArchivoClientes100.read(reinterpret_cast <char *>(&CCons), sizeof(DatosCliente));

                    if (CCons.getCuenta() != 9999){
                        cout << "Ingrese el nuevo saldo : " ;
                        cin >> nuevoSaldo;
                        CCons.setSaldo(nuevoSaldo);
                        ArchivoClientes100.seekp( (cuentaBuscar - 1) * sizeof(DatosCliente), ios::beg);  
                        ArchivoClientes100.write(reinterpret_cast <const char *>(&CCons), sizeof(DatosCliente));
                        cout << "Datos del cliente " << CCons.getCuenta() << " han sido actualizados! " << endl;
                    }
                    else{
                        std::cout << "Registro no encontrado. No se puede actualizar." << std::endl;
                    }

                    // cout << "Ingrese el nuevo saldo : " ;
                    // cin >> nuevoSaldo;
                    // CCons.setSaldo(nuevoSaldo);
                    // ArchivoClientes100.seekp( (cuentaBuscar - 1) * sizeof(DatosCliente), ios::beg);  
                    // ArchivoClientes100.write(reinterpret_cast <const char *>(&CCons), sizeof(DatosCliente));
                    // cout << "Datos del cliente " << CCons.getCuenta() << " han sido actualizados! " << endl;


                }                    
                break;                
            case 5:
                {
                    cout << " Eliminacion" << endl; 

                    cout << "Ingrese la cuenta a eliminar : " << endl;
                    cin >> cuentaBuscar;


                    DatosCliente CElim(23123, "ABC", 0.0);
                    //instrucciones para ir al inicio del archivo
                    ArchivoClientes100.clear();
                    ArchivoClientes100.seekg(0, ios::beg);

                    // obtener posicion donde se encuentra el registro
                    ArchivoClientes100.seekg((cuentaBuscar-1)*sizeof(DatosCliente) ,ios::beg);
                    ArchivoClientes100.read(reinterpret_cast <char *> (&CElim), sizeof(DatosCliente));

                    // validar si existe o no el registro
                    if (confirmacion == 'S' || confirmacion == 's') {
                        ArchivoClientes100.seekp( (cuentaBuscar -1) * sizeof(DatosCliente));
                        DatosCliente ClienteVacio(9999,"XXXXXXXXXX", 9999.99);
                        ArchivoClientes100.write(reinterpret_cast <const char *>(&ClienteVacio), sizeof(DatosCliente));
                        cout << "\nCliente ha sido eliminado!" << endl;
                    }
                    else{
                        cout << "\nCliente NO ha sido eliminado!" << endl;
                    }

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
    
    ArchivoClientes100.close();

    return 0;
}

void impresion(int cuentaImprimir, string nombreImprimir, double saldoImprimir, int CtaRelacionada) {
    cout << left << setw(10) << cuentaImprimir  << setw(13) << nombreImprimir << setw(12) << setprecision(2) << right << saldoImprimir  << right << CtaRelacionada<< endl ;    
}
