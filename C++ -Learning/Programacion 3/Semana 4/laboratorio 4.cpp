#include <iostream>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

// Variable global con las letras existentes de nuestro abc...
char letras[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

//Funcion que devuelve la cantidad de veces que una letra se repite.
// Parametro 1 el vector con las iniciales | Parametro 2, la letra a comparar.
    int repetidas(const vector<char>& iniciales, char letra_comparar){
        // vector<char> iniciales = {'A', 'B', 'J', 'L', 'A', 'R', 'Z', 'T'};
        int contador = 0;
        for(int i = 0; i < iniciales.size(); i++){
            if(letra_comparar==iniciales[i]){
                contador ++;
            }
        }
        return contador;
    }

int main() {
    
    // Se desean almacenar las iniciales de algunos compañeros de 
    // la clase en forma ordenada, suponga que todos tienen 
    // iniciales diferentes, es decir no hay un par de estudiantes 
    // con las mismas iniciales.
    vector<char> iniciales = {'A', 'B', 'J', 'L', 'A', 'R', 'Z', 'T'};
    int n = iniciales.size();
    std::cout << "Cantidad de elementos: " << n << '\n';

    
    // a. Imprima las iniciales en orden alfabético
        std::cout << "a. Imprima las iniciales en orden alfabetico" << '\n'; std::cout << "\t";
        sort(iniciales.begin(), iniciales.end());
        for(int i = 0; i < n; i++){
            std::cout << iniciales[i] << " ,";
        }
        std::cout << " Fin \n" << '\n';


    // b. Imprima las iniciales en orden inverso
        std::cout << "b. Imprima las iniciales en orden inverso" << '\n'; std::cout << "\t";
        reverse(iniciales.begin(), iniciales.end());
        for(int i = 0; i < n; i++){
            std::cout << iniciales[i] << " ,";
        }
        std::cout << " Fin \n" << '\n';


    // c. Determine el tamaño del contenedor
    std::cout << "c. Determine el tamano del contenedor" << '\n'; std::cout << "\t";
    std::cout << "Contenedor: - "<< iniciales.size() << " Elementos." << '\n \n';


    // a. Imprima las iniciales en orden alfabético.
    std::cout << "a. Imprima las iniciales en orden alfabetico." << '\n'; std::cout << "\t \n";
    iniciales.insert(iniciales.end(), {'Z', 'L', 'Q', 'J', 'W', 'R', 'A', 'L', 'A', 'B', 'C', 'C'});
    

    // b.Determine cuantas veces se encuentra registrado unas iniciales
    // ingresadas por el usuario
    std::cout << "b. Determine cuantas veces se encuentra registrado unas iniciales ingresadas por el usuario." << std::endl; std::cout << "\t";
    
    // cuantas veces aparece repetida una letra:
        std::cout << repetidas(iniciales, 'A') << '\n';
    

    int letras_size = sizeof(letras)/sizeof(letras[0]); 
    
    for(int i = 0; i < letras_size; i++){
        std::cout << "La letra " << letras[i] << " aparece "<< repetidas(iniciales, letras[i]) << " veces." << std::endl;
    }


    std::cout << "All good! :D" << '\n';
    return 0;
}