#include <iostream>

int main()
{
    
    
    double gpa = 2.5;
    std::string name = "Jack";
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};



    std::cout << sizeof(gpa) << " bytes" << std::endl;
    std::cout << sizeof(name) << " bytes" << std::endl;
    std::cout << sizeof(student) << " bytes" << std::endl;
    std::cout << sizeof(grades) << " numbers in the list." << std::endl;

    // Imagina que el tamaño total del array students es 128 bytes.
    // y el tamaño de un solo elemento (std::string) es 32 bytes.
    // Al dividirlos nos da un total de 4 elementos.
    int n = sizeof(students)/sizeof(std::string);

    std::cout << n << std::endl;
    
    
    

    

    return 0;
}