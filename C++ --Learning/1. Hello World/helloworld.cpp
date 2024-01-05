#include <iostream>
// In particular, <iostream> includes the definitions for the objects:
// cin, cout, cerr, and clog, which are used for standard input and output in C++.

int main(){
    // 1. STD: std is an abbreviation for the "standard" namespace.
    // 2. COUT: C means character. Out means Output. COUT means Character-Output.
    // 3. STD COUT: Means Standard Character Output. We will display some characters as output.
    // 4. <<: The two left angle brackets mean "output".
    // 5. ; : It marks the end of a statement.
    std::cout << "I like pizza... ";

    // 6. Text is always concatenated. So "\n" will make a new line character.
    std::cout << "It's really good!" << "\n";

    // 7. ENDL: End Line, will flush the output buffer, so will give better performance.
    std::cout << "I like hamburguers too!" << std :: endl;

    // 8. In many OS this means that there were no problems executing the program.
    return 0; 
}
