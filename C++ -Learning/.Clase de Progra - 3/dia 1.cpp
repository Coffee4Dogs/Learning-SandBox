#include <iostream>

int main()

    int entradas, bebidas, palomitas, amigos;
    char dia_semana; // L, M, X, J, V, S, D
    bool PagoEfectivo; //True efectivo - False Tarjeta
    double totalcomida;
    double PrecioEntrada = 95.00;
    double PrecioBebida = 50.00;
    double PrecioPalomitas = 150;
    double subtotal;
    const int isv = 0.15;
    std::cout << "Cantidad de entradas:" << std::endl;
    std::cin >> entradas;
    std::cout << "Cantidad de bebidas:" << std::endl;
    std::cin >> bebidas;
    std::cout << "Cantidad de palomitas:" << std::endl;
    std::cin >> palomitas;
    std::cout << "Dia de la semana" << std::endl;
    std::cin >> palomitas;
    std::cout << "Cantidad de amigos" << std::endl;
    std::cin >> amigos;
    std::cout << "Pago en efectivo? " << std::endl;
    std::cin >> PagoEfectivo;
    

    if(bebidas <= amigos && palomitas <= amigos){
        totalcomida = bebidas * PrecioBebida + palomitas * PrecioPalomitas;
    }
    else{
        std::cout << "No puede comprar una cantidad mayor que la de sus amigos." << std::endl;
    }

    if(dia_semana == 'L'){
        entradas = PrecioEntrada / 2 * amigos;
    }
    else{
        entradas = PrecioEntrada * amigos;
    }

    // Descuento Pago por Efectivo
    if(PagoEfectivo==true){
        subtotal = subtotal *0.10;
    }
    else{

    }




    return 0;
}
