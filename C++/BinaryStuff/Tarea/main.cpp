
// Jack Hollmann Lagos Mejia
// Numero De Cuenta:
// 32011727

#include <iostream>
#include <fstream>
#include <vector>
using std::fstream;
using std::cout; 
using std::endl;
using std::cin; 
using std::string;
using std::vector;

class PELICULA {
    private:
        int Numero;         //Numero del 1 - 20
        char Nombre[26];    //Nombre de la pelicula
        double Rating;      //0.0 - 9.9
        int Comentarios;    //Cant. Comentarios.
        bool Saga;          //El publico quiere ver una saga?

    public:
    //Constructor
    PELICULA(int Numero, const char* Nombre, double Rating, int Comentarios, bool Saga){
        this-> Numero = Numero;
        setNombre(Nombre);

        this-> Rating = Rating;
        this-> Comentarios = Comentarios;
        this-> Saga = Saga;  
    }

    //SET
    void setNumero(int Numero){
        if(Numero >= 20){
            this-> Numero = 20;
        }
        else if(Numero <= 1){
            this-> Numero = 1;
        }
        else{
            this-> Numero = Numero;
        }
    }

    void setNombre(const char* nombre) {
        int i;
        for (i = 0; i < 25 && nombre[i] != '\0'; ++i) {
            Nombre[i] = nombre[i];
        }
        Nombre[i] = '\0'; 
    }

    void setRating(double Rating){
        if(Rating >= 9.9){
            this-> Rating = 9.9;
        }
        else if(Rating <= 0){
            this-> Rating = 0;
        }
        else{
            this-> Rating = Rating;
        }

    }

    void setComentarios(int Comentarios){
        this->Comentarios = Comentarios;
    }

    void setSaga(bool Saga){
        this->Saga = Saga;
    }



    //GET
    int getNumero(){
        return this-> Numero;
    }

    const char* getNombre() const {
        return Nombre;
    }

    double getRating(){
        return this-> Rating;
    }

    int getComentarios(){
        return this->Comentarios;
    }

    bool getSaga(){
        return this->Saga;
    }

    //Metodo Vacio
    PELICULA(){}

    //Destructor
    ~PELICULA(){}

};


void CrearRegistro(int Numero, const char* nombre, double Rating, int Comentarios, bool Saga) {
    //Variables, Objetos, Instancias
    PELICULA peli;
    std::fstream file;
    std::string address = "peliculas.txt";

    peli.setNumero(Numero);
    peli.setNombre(nombre);
    peli.setRating(Rating);
    peli.setComentarios(Comentarios);
    peli.setSaga(Saga);

    file.open(address, std::fstream::app);
    if (file.is_open()) {
        file << peli.getNumero() << ' ' << peli.getNombre() << ' ' << peli.getRating() << ' ' << peli.getComentarios() << ' ' << peli.getSaga() << '\n';
        file.close();
    }
}

void CrearRegistroB(int Numero, const char* nombre, double Rating, int Comentarios, bool Saga) {
    //Variables, Objetos, Instancias
    PELICULA peli;
    std::ofstream file("paciente.dat", std::ios::binary | std::ios::app);
    file.open("paciente.dat", fstream::app);
    if (file.is_open()) {
        peli.setNumero(Numero);
        peli.setNombre(nombre);
        peli.setRating(Rating);
        peli.setComentarios(Comentarios);
        peli.setSaga(Saga);

        // Escribir la información de la película en el archivo binario
        file.write(reinterpret_cast<const char*>(&peli), sizeof(peli));

        file.close();
    } 
}



void LeerRegistro(){
    int Numero; string Nombre; double Rating; int Comentarios; //bool Saga;
    int sagac;
    vector <string>VNombre; vector <double>VRating; vector<bool>VSaga;
    

    fstream file; string address = "peliculas.txt";
    int saga = 1;
    
    string line;
    file.open(address, fstream::in);
    if(file.is_open()){
        while(file >> Numero >> Nombre >> Rating >> Comentarios >> sagac){
            if(saga=sagac){
                std::cout << Nombre <<" "<< Rating <<" "<<sagac<<'\n';
            }
            


        }
        
        file.close();
    }

    

}

void CrearRegistrobinario(int Numero,  double Rating, int Comentarios, bool Saga){
    
    //Variables, Objetos, Instancias
    PELICULA peli;  fstream file;   string address = "peliculas.dat";
    
    peli.setNumero(Numero);
    // peli.setNombre(Nombre);
    peli.setRating(Rating);
    peli.setComentarios(Comentarios);
    peli.setSaga(Saga);

    
   file.open(address, fstream::binary | fstream::in | fstream::out);
    if(file.is_open()){        
        file << peli.getNumero() << ' ' << peli.getRating() << ' ' << peli.getComentarios() << ' ' << peli.getSaga()  << '\n';
        file.close();
    }
}

int main() {
    
    CrearRegistro(1, "Coco", 10, 17, 1);
    CrearRegistro(2, "ElSenorAnillos", 1.3, 54, 0);
    CrearRegistro(3, "ForrestGump", 5.3, 54, 0);
    CrearRegistro(4, "Pianista", 5.3, 54, 0);
    CrearRegistro(5, "SalvaralsoldadoRyan", 8.3, 54, 1);
    CrearRegistro(6, "ElPadrino", 8.3, 54, 0);
    CrearRegistro(7, "Matrix", 5.3, 54, 1);    
    CrearRegistro(8, "LaListaDeSchindler", 8.3, 54, 1);
    CrearRegistro(9, "Elsilencio de los corderos", 8.3, 54, 0);
    CrearRegistro(10, "ForrestGump", 1.3, 14, 0);
    CrearRegistro(11, "ElCaballeroDeLaNoche", 8.3, 54, 0);
    CrearRegistro(12, "LaVidaEsBella", 8.3, 54, 1);
    CrearRegistro(13, "PulpFiction", 8.3, 54, 0);
    CrearRegistro(14, "ElClubdelapelea", 8.3, 54, 1);
    CrearRegistro(15, "El laberinto del fauno", 8.3, 54, 0);
    CrearRegistro(16, "Kane", 8.3, 54, 0);
    CrearRegistro(17, "Interestelar", 8.3, 54, 1);
    CrearRegistro(18, "ElViajeDeChihiro", 1.3, 54, 0);
    CrearRegistro(19, "CadenaPerpetua", 8.3, 54, 0);
    CrearRegistro(20, "BladeRunner", 1.3, 54, 1);
    
    CrearRegistroB(1, "Coco", 10, 77, 1);
    CrearRegistroB(2, "ElSenorAnillos", 8.3, 54, 0);
    CrearRegistroB(3, "ForrestGump", 8.3, 54, 0);
    CrearRegistroB(4, "Pianista", 8.3, 54, 0);
    CrearRegistroB(5, "SalvaralsoldadoRyan", 8.3, 54, 0);
    CrearRegistroB(6, "ElPadrino", 8.3, 54, 0);
    CrearRegistroB(7, "Matrix", 8.3, 54, 0);
    CrearRegistroB(8, "LaListaDeSchindler", 8.3, 54, 0);
    CrearRegistroB(9, "Elsilencio de los corderos", 8.3, 54, 0);
    CrearRegistroB(10, "ForrestGump", 8.3, 54, 0);
    CrearRegistroB(11, "ElCaballeroDeLaNoche", 8.3, 54, 0);
    CrearRegistroB(12, "LaVidaEsBella", 8.3, 54, 1);
    CrearRegistroB(13, "PulpFiction", 8.3, 54, 0);
    CrearRegistroB(14, "ElClubdelapelea", 8.3, 54, 1);
    CrearRegistroB(15, "El laberinto del fauno", 8.3, 54, 0);
    CrearRegistroB(16, "Kane", 8.3, 54, 0);
    CrearRegistroB(17, "Interestelar", 8.3, 54, 1);
    CrearRegistroB(18, "ElViajeDeChihiro", 8.3, 54, 0);
    CrearRegistroB(19, "CadenaPerpetua", 8.3, 54, 0);
    CrearRegistroB(20, "BladeRunner", 8.3, 54, 1);


    LeerRegistro();
    CrearRegistrobinario(1, 10, 77, 1);
 
  PELICULA nuevapelicula;

//   CrearRegistro();






    return 0;
}