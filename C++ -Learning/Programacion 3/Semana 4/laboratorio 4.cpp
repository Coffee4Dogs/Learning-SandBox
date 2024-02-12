// #Cuenta: 32011727 -> Jack Hollmann Lagos Mejia
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using std::queue;
using std::string;
using std::vector;
using std::sort;


int main() {
    
    //Declarar Queue/Cola
        queue<string> libros; 

    //Informacion del queue.
        std::cout << "=> Cual es el tam. del queue? =>"<< libros.size() << '\n';       //Tamaño Queue.
        libros.empty() == 1 ? std::cout << "=> El queue SI esta vacio" << '\n' : std::cout << "=> El queue NO esta vacio" << '\n';     //Esta Vacio?

    //Agregar Elementos a la cola o queue:
        libros.push("El Senor de los Anillos");     
        libros.push("Harry Potter");
        libros.push("El Codigo da Vinci");
        libros.push("Lo que el viento se llevo");
        libros.push("Padre Rico Padre Pobre");
        libros.push("La Biblia");

    //Informacion del queue.
        std::cout << "=> Cual es el tam. del queue? =>"<< libros.size() << '\n';       //Tamaño Queue.
        libros.empty() == 1 ? std::cout << "=> El queue SI esta vacio" << '\n' : std::cout << "=> El queue NO esta vacio" << '\n';     //Esta Vacio?

    
    //Declarar el vector.
        vector<string> LibrosOrdenados; 
    
    // Pasar el contenido del queue a un vector.
        while(!libros.empty()){
            LibrosOrdenados.push_back(libros.front());
            libros.pop();
        }
    
    //Ordenar libros de menor a mayor. Se necesita la libreria #include <algorithm>
        sort(LibrosOrdenados.begin(), LibrosOrdenados.end());

    // Meter los libros al queue de nuevo
        for(int i = 0; i < LibrosOrdenados.size(); i++){
                libros.push(LibrosOrdenados[i]);
                
        }  



    







    // Mostrar que los libros ya estan ordenados de menor a mayor:
    std::cout << "Los libros estan ordenados de menor a mayor " << '\n';
    while(!libros.empty()){
        std::cout << "\t - "<<libros.front() << std::endl;
        libros.pop();
    }
    std::cout << '\n';
    std::cout << "--------------" << '\n';

    std::cout << "Imprimir en Reversa: " << '\n';
    queue<string> libros_inverso;
    
    

    libros_inverso.push(libros.front());

    std::cout << "--> "<<libros_inverso.front() << '\n';
   
   

    
        

    


    std::cout << "Programa termino con exito." << '\n';
    return 0;
}