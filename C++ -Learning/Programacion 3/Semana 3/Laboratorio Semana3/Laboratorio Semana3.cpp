/* ***************************************
Ingrese en este espacio sus datos:
   Nombre: Jack Hollmann Lagos Mejia
   Numero de Registro: 32011727

***************************************** */

#include <iostream>
#include <string>

using namespace std;
double SaldoCuenta;
class CUENTA {
    private:
        int c_id;
        double c_saldo;
	    string c_fecapert;

    public:
        CUENTA(int newId=0, double newSaldo=1000.0, string newFecha = "20240201") // yyyymmdd 
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
            c_saldo = SaldoCuenta;
            
        }

        void setSaldo (double valorR, double comision = 0.0){ // Yohasthin
			int nuevoSaldo ;
			if (comision <= 0) {
				nuevoSaldo = valorR + c_saldo ; 
			} else {
				nuevoSaldo = c_saldo - (valorR + comision) ;
			}
            c_saldo = nuevoSaldo;
            c_saldo = SaldoCuenta;
			cout << "El nuevo saldo de la cuenta es : " << nuevoSaldo << endl ;
		}

        void setFecha(string nuevaFecha){
            c_fecapert = nuevaFecha;
        }

        int getId() {
            return c_id;
        }

        double getSaldo() {
            return c_saldo;
        }

        void getSaldo( string usuario){ // Victor
            cout << "El nombre del usuario ingresado es: " << usuario<<endl;

           // if (this->c_saldo > 1000){
             if (c_saldo > 1000){
                cout<<"El saldo de la cuenta es mayor al minimo"<<endl;
            }else{
                cout<<"El saldo de la cuenta es menor al minimo"<<endl;
            }
        }

        string getFecha(){
            return c_fecapert;
        }

        void getInfo() {
            cout << "Informacion de la cuenta \n";
            cout << "Numero de Cuenta: " << c_id << endl;
            cout << "Saldo " << c_saldo << endl;
            cout << "Fecha Apertura " << c_fecapert << endl;
           // return getInfo();
        }
};

class AHORRO : public CUENTA {
    private:
        double a_tasa;
    public:
        AHORRO(double nuevaTasa=1.5)
        {
            std::cout << "Inicializando clase derivada Ahorro\n";
            a_tasa = nuevaTasa;
        }
    
        double getTasa() { return a_tasa; }
		
		void getDetAhorro() {
			cout << "Numero de Cuenta: " << getId() << endl;
			cout << "Saldo " << getSaldo() << endl;
			cout << "Fecha Apertura " << getFecha() << endl;
			cout << "Tasa  " << a_tasa << endl;
			
		}


};

class MENORAHORRO: public AHORRO{
    private:
        int edad;
        bool tutorEsCliente;
        int cantTr;

    public:
        MENORAHORRO(){
            // Andersson
            //setSaldo(0.0);
            edad = 1;
            tutorEsCliente = 0;
            cantTr = 0;
        }

        MENORAHORRO(int newCuenta, string newFecha, double newSaldo, int newEdad = 1, int newCantTr = 2){
            setId(newCuenta);
            //setSaldo(newSaldo);
            setFecha(newFecha);
            edad = newEdad;
            tutorEsCliente = true;
            cantTr = newCantTr;    
        }

        int getEdad() { return edad;}
        void setEdad(int edadMenor) { edad = edadMenor;}

        // gettutor setTutor  Miguel


        // getCant  setCant  Josue
        //getcant 
        int getcant(){        
            return cantTr;
        }

        // setCant 
        void setCant(int newcantidad){
            cantTr= newcantidad;
        }

        void getDetalleMenorAhorro() {
            getDetAhorro();
            cout << "Edad del titular: " << edad << endl;
            cout << "El tutor es cliente: " << (tutorEsCliente ? "Si" : "No") << endl;
            cout << "Cantidad de transacciones realizadas: " << cantTr << endl;
        }

};

class PRESTAMO : CUENTA {
    public:
        double MontoPrestamo = 0.0;//c_saldo
        double MontoCuota = 0.0;
        int CuotasOriginales = 0;
        int CuotasPagadas = 0;

    public:
        PRESTAMO(double MontoPrestamo, double MontoCuota, int CuotasOriginales, int CuotasPagadas){
            ActualizarMontoPrestamo(); //MontoPrestamo = SaldoCuenta;
            ActualizarCuotasPagadas(MontoPrestamo, CuotasOriginales, CuotasPagadas);
            this->CuotasOriginales = CuotasOriginales;
            this->CuotasPagadas = CuotasPagadas;  
        }

        void ActualizarMontoPrestamo(){
            this->MontoPrestamo = SaldoCuenta;
            SaldoCuenta = 0;
        }

        // montocuota = montoprestamo / cantcuotas
        void ActualizarCuotasPagadas(double MontoPrestamo, int CuotasOriginales, int CuotasPagadas){
            int CuotasPendientes = CuotasOriginales - CuotasPagadas;
            this->MontoCuota = MontoPrestamo / CuotasPendientes;  
        }

        void PreguntarCuotasOriginales(){
            int CantCuotas;
            std::cout << "Ingrese la cantidad de Cuotas Originales: ";
            cin >> CantCuotas;
            SetCuotasOriginales(CantCuotas);
            std::cout << "Nuevo prestamo creado." << std::endl;
            std::cout << "Monto de la cuota: "<< this->MontoPrestamo << '\n';
        }

        void PagarCuota(){
            // this->CuotasOriginales
            // this->CuotasPagadas
            int CuotasPagar;
            std::cout << "Ingrese las cuotas a pagar: " << '\n';
            std::cin >> CuotasPagar;
            this->CuotasPagadas = CuotasPagar;
            if(this->CuotasPagadas >= this->CuotasOriginales){
                std::cout << "Pago Completo!" << '\n';
            }
            else{
              std::cout << CuotasPagar <<" cuotas pagadas con exito." << '\n';
              std::cout << "Faltan: " << CuotasPagar << " cuotas" << std::endl;
              std::cout << "Cada cuota es de: " << this->MontoCuota << std::endl; 
            }
            ActualizarCuotasPagadas(this->MontoPrestamo, this->CuotasOriginales, this->CuotasPagadas);
        }


        // Metodos Set
            void SetMontoPrestamo(double temp){
                MontoPrestamo = temp;
            }

            void SetMontoCuota(double temp){
                MontoCuota = temp;
            }

            void SetCuotasOriginales(int temp){
                CuotasOriginales = temp;
            }

            void SetCuotasPagadas(int temp){
            CuotasPagadas = temp;
        }

        //Metodos Get
            double GetMontoPrestamo(){
                return MontoPrestamo;
            }

            double GetMontoCuota(){
                return MontoCuota;
            }

            int GetCuotasOriginales(){
                return CuotasOriginales;
            }

            int GetCuotasPagadas(){
            return CuotasPagadas;
        }

        //Otros Metodos
       



    PRESTAMO(){
    }
    ~PRESTAMO(){}
};  



int main() {
    PRESTAMO Prestamo1;
    std::cout << "Prueba de Programa y Clases" << std::endl;
	CUENTA General(100, 2500, "20231026");
	General.getInfo();
	//AHORRO AhorroBase(200, 1500, "20231027",1.25);
    AHORRO AhorroBase(1.25);
	AhorroBase.getDetAhorro();
    MENORAHORRO HijoAhorro;
    HijoAhorro.getDetalleMenorAhorro();
    HijoAhorro.setSaldo(250, 10);
    HijoAhorro.setSaldo(100, 0);
	

    std::cout << "El saldo en clase General es: "<< General.getSaldo() << '\n';
    
    Prestamo1.SetMontoPrestamo(General.getSaldo());
    std::cout << "El Monto Prestamo en clase Prestamo 1 es: "<< Prestamo1.GetMontoPrestamo() << '\n';
    // Prestamo1.CrearCuotasOriginales();
    Prestamo1.PreguntarCuotasOriginales();

    
    return 0;
}
