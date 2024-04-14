// recursion = a programming technique where a function
//             invokes itself from within
//             break a complex concept into a repeatble single steps


// (iterative vs recursive)

// advantages = less code and is cleaner
            // useful for sorting and searching algorithms

// disadvantages = uses more memory
//               slower


#include <iostream>


void walk(int steps);

int main() {
    
    walk(100);


    return 0;
}

// itterative approach
void walk(int steps){
    for(int i = 0; i < steps; i++){
        std::cout << "You take a step!" << '\n';

    }
}

// -------------------------

// recursive approach
void walk(int steps){
    if(steps > 0){
        std::cout << "You take a step!" << '\n'; 
        walk(steps-1);
    }
}


// // Stack Overflow (desbordamiento de pila)
// void walk(int steps){
//     if(steps > 0){
//         std::cout << "You take a step!" << '\n'; 
//         walk(steps);
//     }
// }

// The most-common cause of stack overflow is excessively deep 
// or infinite recursion, in which a function calls itself so 
// many times that the space needed to store the variables and 
// information associated with each call is more than can fit 
// on the stack.
