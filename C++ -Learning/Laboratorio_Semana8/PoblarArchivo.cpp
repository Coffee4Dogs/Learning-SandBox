#include <iostream>
using std::cin;
using std::cerr;
using std::ios;

#include <fstream>
using std::ofstream;

#include <string>
using std::string;



class DatosCliente {
    private:
        int numeroCuenta;
        char nombre[10];
        double saldo;
        //int numCtaRelacionada;//Para despues: (set y get)
    public:
        void setCuenta(int cuentaNueva) {
            numeroCuenta = cuentaNueva;
        };

        int getCuenta() {
            return numeroCuenta;
        };

        void setNombre(string nuevoNombre) {
            //const char *valorNombre = nuevoNombre.data();
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

        DatosCliente(int miCuenta, string miNombre, double miSaldo) {
            setCuenta(miCuenta);
            setNombre(miNombre);
            setSaldo(miSaldo);
        }
};

int main() {
    ofstream ArchivoDatosTxt("Clientes100.txt", ios::out );

    // ostream ArchivoDatosTxt;
    // ArchivoDatosTxt.open("Clientes100.txt", ios::out);  

    if (!ArchivoDatosTxt) {
        cerr << "No se puede abrir el archivo!";
        return 1;
    }  

    DatosCliente ClienteVacio(9999,"XXXXXXXXXX", 9999.99);

    for (int i=0; i<100 ; i++) {
        ArchivoDatosTxt << ClienteVacio.getCuenta() << " " << ClienteVacio.getNombre() << " " << ClienteVacio.getSaldo() << std::endl;
    }


    ArchivoDatosTxt.close();
    std::cout << "Archivo Texto cerrado " << std::endl;


    ofstream ArchivoDatos("Clientes100.odc", ios::out | ios::binary);
    // ostream ArchivoDatos;
    // ArchivoDatosTxt.open("Clientes100.dat", ios::out | ios::binary);     

    if (!ArchivoDatos) {
        cerr << "No se puede abrir el archivo!";
        return 1;
    }   
    
    for (int i=0; i< 100; i++) {
        // escribir una instancia que se llama ClienteVacio
        ArchivoDatos.write(reinterpret_cast <const char *>(&ClienteVacio), sizeof(DatosCliente));
    }

    ArchivoDatos.close();
    std::cout << "Archivo Binario cerrado " << std::endl;

    return 0;
} 