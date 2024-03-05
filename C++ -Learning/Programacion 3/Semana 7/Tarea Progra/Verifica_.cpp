/* ***************************************
    Ingrese en este espacio sus datos:
    Nombre: Jack Hollmann Lagos Mejia
    Numero de Registro: 32011727

***************************************** */

// Programa D: Descargue el archivo Verifica.cpp, incluya el código que imprima los valores
// y direcciones de x e y dentro de los procedimientos indicados. Ejecute el programa.
// Comente dentro del código del programa que observa, a que cree que se deba lo
// anterior.


#include <iostream>

void procedimientoUno(int parametro1)
{
    int x;
    x = parametro1;
    int *px = &x;
    /* imprima la direccion y valor de x */
    std::cout <<" Valor de x : " << x << '\n';
    std::cout << "Lo que tiene dentro en esa direccion de la memoria ram (contenido): " << *px << '\n';
    std::cout << "La ruta en memoria la memoria ram: " << &px << '\n';

}
void procedimientoDos(int parametro2)
{
    int y; // No parece que falta algo? (= parametro2). A y no se le asigno ningun valor, mientras que a x se le asigna el parametro1. Los parametros si tienen valor (93 o 20).
    int *py = &y;
    /* imprima la direccion y valor de y  */
    std::cout <<" Valor de y : " << y << '\n'; //Al comprobar sus valores vemos que hay un problema.
    std::cout << "Lo que tiene dentro en esa direccion de la memoria ram (contenido): " << *py << '\n'; //Al hacer un puntero y ver el contenido en la memoria ram, vemos lo esperado, su valor entero.
    std::cout << "La ruta en memoria la memoria ram: " << &py << '\n';                                  // Sin embargo vemos que tiene la misma ruta y no una ruta distinta como esperabamos. Una forma eficiente para detectar errores logicos, ya que ambas variables no deberian de compartir la misma ruta.    
}
int main()
{
    procedimientoUno(93);
    procedimientoDos(20);
    return 0;
}
// Conclusion: 
// Al ser variables no utilizadas, lo esperado es que C++ trate de optimizar de alguna manera nuestro codigo, quitando variables no utilizadas.
// Sin embargo esto puede ofuscar un error (logico) que luego sera un problema a futuro. 