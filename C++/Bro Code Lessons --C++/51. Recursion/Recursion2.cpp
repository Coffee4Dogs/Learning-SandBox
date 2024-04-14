#include <iostream>




int Itterative_factorial(int num);
int Recursive_factorial(int num);

int main() {
    
    std::cout << Itterative_factorial(10) << '\n';
    std::cout << Recursive_factorial(10) << '\n';
    return 0;
}

//Iterative
int Itterative_factorial(int num){
    int result = 1;

    for(int i = 1; i <= num; i++){
        result = result * i;
    }
    return result;
}


int Recursive_factorial(int num){
    // if(num > 1){
    //     return num * Recursive_factorial(num-1);
    // }
    // else{
    //     return 1;
    // }

    
    (num > 1) ? num = num * Recursive_factorial(num-1) : num = 1;
    return num;


}