#include <iostream>
#include <string>



using std::string;
using std::cout;
using std::endl;
using std::cin;


class CUENTA {
    public:
        int c_id;
        double c_saldo;
	    string c_fecapert;

    private:
        CUENTA(int newId=0, double newSaldo=1000, string newFecha = "20240201") // yyyymmdd 
        {
            std::cout << "Inicializando Clase Base Cuenta \n";
            c_id = newId;
            c_saldo = newSaldo;
            c_fecapert = newFecha;
        }

        void setId(int nuevoId) {
            c_id = nuevoId;
        }

        void setSaldo(double nuevoSaldo) {
            c_saldo = nuevoSaldo;
        }

        void setString(string nuevaFecha){
            c_fecapert = nuevaFecha;
        }

        int getId() {
            return c_id;
        }

        double getSaldo() {
            return c_saldo;
        }

        string getFecha(){
            return c_fecapert;
        }

        void getInfo() {
            cout << "Informacion de la cuenta" << std::endl;
            cout << "Numero de Cuenta: " << c_id << endl;
            cout << "Saldo " << c_saldo << endl;
            cout << "Fecha Apertura " << c_fecapert << endl;
            return getInfo();
        }
};

class AHORRO : public CUENTA {
    private:
        double a_tasa;
    public:
        AHORRO(double nuevaTasa=1.5)
        {
            std::cout << "Inicializando clase derivada Ahorro\n";

        }
    
        double getTasa() { return a_tasa; }
		
		void getDetAhorro() {
			cout << "Numero de Cuenta: " << c_id << endl;
			cout << "Saldo " << c_saldo << endl;
			cout << "Fecha Apertura " << c_fecapert << endl;
			cout << "Tasa  " << a_tasa << endl;
			
		}


};

int main() {

    std::cout << "Prueba de Programa y Clases" << std::endl;

    
	CUENTA General(100, 2500, "20231026");
	

	General.getInfo();
	
	// AHORRO AhorroBase(200, 1500, "20231027",1.25);
	AHORRO AhorroBase(1.25);

	AhorroBase.getDetAhorro();
	
	
    return;
}
