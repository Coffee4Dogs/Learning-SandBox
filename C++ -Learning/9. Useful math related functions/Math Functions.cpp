#include <iostream>
#include <cmath>

int main(){
    double x = 3.14;
    double y = 4;
    double w = 3.99;
    double z;

    // :: se usa para acceder a los miembros de una clase
    // esto me da el valor maximo de estos numeros
    z = std::max(x,y);
    std::cout << z << std::endl;

    // minimum value
    z = std::min(x,y);
    std::cout << z << std::endl;
    
    // power of 3
    z = pow(2, 4);
    std::cout << z << std::endl;

    // square root
    z = sqrt(9);
    std::cout << z << std::endl;

    z = abs(-3);
    std::cout << z << std::endl;

    z = round(x);
    std::cout << z << std::endl;

    // ceil (redondear hacia arriba) (techo, en inglés "ceiling")
    z = ceil(w);
    std::cout << z << std::endl;

    // redondear hacia abajo un número decimal al entero más cercano. (Floor, Piso)
    z = floor(w);
    std::cout << z << std::endl;







    return 0;
}