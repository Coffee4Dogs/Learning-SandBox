#include <iostream>
#include <vector>



// A vector is a class template. A blueprint from which specific
// class types can be created.
// Template:
//     Not functions or classes.
//     Guidelines for the compiler to use to create classes or functions.
// Instantiation->Describes the procedure the compiler employs to build classes
// functions out of templates.

int main() {

    std::vector<int> myVec;
    myVec = {1, 2, 3, 4, 5};
    
    for(int i:myVec)
        std::cout << i << '\n';


        
    return 0;
}