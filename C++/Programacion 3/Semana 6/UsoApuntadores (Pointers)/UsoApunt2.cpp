//Uso 2 de Apuntadores: Iteradores
#include <iostream>
#include <cstddef>
#include <typeinfo>

using std::cout;
using std::cin;
using std::endl;

int main() {
    // declarar un arreglo de enteros e inicializarlo con 7 elementos
    int numeros[7] = {25, 9859, 145, 6547, 360, 2, 7899};

    std::cout << "Tamano de numeros: " << std::size(numeros) << '\n';

    // declarar variable tamano, utilizar propiedad sizeof

    int tam_t = sizeof(numeros);

    // declarar variable tamano un dato, encontrar sizeof de un dato
    int tam_i = sizeof(numeros[0]);

    // declarar cant de elementos del arreglo, como se puede calcular

    std::cout << "Tamanos: "<< tam_t << " y " << tam_i << " bytes." << '\n';

    // desplegar variables anteriores

    std::cout << "Cantidad de elementos: " << tam_t/tam_i << '\n';

    // recorrer arreglo con ciclo for
    //for (int i = 0; i < 5; i++) {
    // incluir direcciones donde se encuentra en memoria

    for (int i = 0; i < 5; i++) {
        std::cout << "#: " << i << numeros[i] << " y se almacenan en " << &numeros[i] << '\n';
    }

    // declarar una variable tipo auto, llamada inicio con la posicion inicial del arreglo

    auto inicio = &numeros[0];

    // declarar una variable tipo auto, llamada final con la posicion final del arreglo

    auto final = &numeros[6];

    //desplegar variables inicio y final

    std::cout << "Inicio: " << inicio << " - Final: " << final << '\n';

    std::cout << "Tipo Inicio: " << typeid(inicio).name() << '\n';
    std::cout << "Tipo Final: " << typeid(final).name() << '\n';

    std::cout << "Tipo numeros: " << typeid(numeros).name() << '\n';
    std::cout << "Tipo tam_t: " << typeid(tam_t).name() << '\n';
    std::cout << "Tipo a : " << typeid('a').name() << '\n';
    std::cout << "Tipo false : " << typeid(false).name() << '\n';
    std::string s;
    std::cout << "Tipo Final: " << typeid(s).name() << '\n';


    // recorrer elementos del arreglo haciendo uso de variable pntr

    for(auto pntr = inicio; pntr <= final; pntr++){
        std::cout << "Tipo pntr: " << typeid(pntr).name()  << '\n';
        std::cout << "Contenido: " << pntr << '\n';
        std::cout << "Contenido de lo apuntado: " << *pntr << '\n';
    }
    

    // Acceder al 3r elemento
    //cout << arreglo[2] << endl ;  valido si no se usan apuntadores

    std::cout << numeros[2] << '\n';
    std::cout << *(inicio + 2) << '\n';
    std::cout << *inicio + 2<< '\n'; // <- NOT THIS

    // Acceder al 5o elemento

    std::cout << *(inicio+4) << '\n';

    // Verificar algunos tipos de datos
    return 0;
}