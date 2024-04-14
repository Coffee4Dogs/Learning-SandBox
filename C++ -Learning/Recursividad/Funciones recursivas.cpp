#include <iostream>
using std::cout; using std::cin; using std::endl;



void RestRecursiva(int NumeroRestar){
    if(NumeroRestar == 0){
        std::cout << "Resultado Recursivo Final:" << NumeroRestar << '\n';
    }
    else{
        std::cout << "Resta Recursiva Parcial: " << NumeroRestar << '\n';
        RestRecursiva(NumeroRestar -1);
    }
}

//2.factorial
int factorial_itterativa(int fact1){
    int res = 1;
    for(int i = 1; i <= fact1; i++){
        res = res * i;
    }
    return res;
}

int factorial_recursiva(int fact1){
    int res;
    if(fact1 > 0){
        res = fact1 * factorial_recursiva(fact1 - 1);
    }
    else{
        return 1;
    }
    return res;
}

//3.busqueda lineal

int main() {
    // int resta1, resta2, resta3;
    // //1.num - num
    // std::cout << "Ingrese un numero a restar:" << '\n';
    // cin >> resta1;
    // resta3 = resta2 = resta1;

    // cout << "resta iterativa" << endl;
    // //resta2
    // while(resta2>0){
    //     resta2--;
    //     std::cout << "resultado parcial: "<< resta2 << '\n';
    // }

    // //Resta 1.c
    // std::cout << "Resta recursiva" << '\n';
    
    int itemp; std::cin << itemp; //itemp -> Temporal Int.

    std::cout << factorial_itterativa(itemp) << '\n';
    std::cout << factorial_recursiva(itemp) << '\n';
    
    return 0;
}