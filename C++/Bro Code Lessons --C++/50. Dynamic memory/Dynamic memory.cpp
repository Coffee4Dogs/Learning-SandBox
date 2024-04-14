// Dynamic memory = Memory that is allocated after the program
//                 is already compiled & running.
//                 Use the 'new' opperator to allocate
//                 memory in the heap rather than the stack.

                // Useful when we don't know how much memory
                // we will need. Makes our programs more flexible,
                // especially when accepting user input.

#include <iostream>

int main() {
    
    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    delete pNum;

    return 0;
}