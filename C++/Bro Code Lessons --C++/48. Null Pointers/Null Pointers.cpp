// null value = a special value that means something has no value.
//             when a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer).

// nullptr = keyword represents a null pointer literal

// nullptrs are helpfull when determining if an address
// was successfully assigned to a pointer.

#include <iostream>

int main() {
    // Pointer is declared and will be equal to null, i mean null pointer.
    int *pointer = nullptr;
    int x = 123;
    // pointer = to the address we haver on variable x
    pointer = &x;

    // what we can do is check if this is a null pointer or not

    // my pointer asigned to an address or not?
    if(pointer == nullptr){
        std::cout << "address was not assigned" << '\n';
        std::cout << *pointer << '\n';
    }
    else{
        std::cout << "address was assigned" << '\n';
        std::cout << *pointer << '\n';
    }


    

    return 0;
}
