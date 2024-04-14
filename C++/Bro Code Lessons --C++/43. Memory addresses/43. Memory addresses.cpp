#include <iostream>

int main() {
    
    // memory adress: a location in memory where data is stored.
    // a memory address can accessed with & (adress of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    // Is a bunch of weird numbers and letterss.
    // That is a hexadecimal address.
    std::cout << &name << '\n';

    std::cout << &age << '\n';

    std::cout << &student << '\n';

    

    // For fun you can try converting those hexadecimal values to decimal.

    // In my case mine are these:
    // 582987282160
    // 582987282156
    // 582987282155
    

    // For example the distance between the first one  and the second one is 4 bytes.
    std::cout << sizeof(age) << '\n';


    return 0;
}