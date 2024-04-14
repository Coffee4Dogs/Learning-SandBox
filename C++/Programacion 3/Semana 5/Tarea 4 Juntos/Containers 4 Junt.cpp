// 2. Considere el contenedor cola (queue). Busque al menos dos algoritmos que puedan
// aplicarse a este contenedor y escriba un breve programa que incluya un ejemplo
// para cada algoritmo sobre su uso en el contenedor cola (queue).

#include <iostream>
#include <queue>

using std::queue;
using std::cout;
using std::endl;
using std::cin;

int main() {
    queue<std::string> Clientes;

    // Agregar Clientes:
    Clientes.push("Karen");
    Clientes.push("Daniel");
    Clientes.push("Jorge");
    Clientes.push("Francisco");
    Clientes.push("Alexander");
    Clientes.push("Uriel");
    Clientes.push("William");
    Clientes.push("Andres");
    std::cout << "Cantidad de clientes (tamano del queue): " << Clientes.size() << std::endl;

   
    
    

    return 0;
}