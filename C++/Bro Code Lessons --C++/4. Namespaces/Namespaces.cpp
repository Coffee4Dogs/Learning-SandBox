#include <iostream>

// Namespace = provides a solution for preventing name conflicts
//             in large projects. Each entity needs a unique name.
//             A namespace allows for identically named entities
//             as long as the namespaces are different.

namespace first{
    int x = 1;

}

namespace second{
    int x = 2;

}

int main() {

    //using namespace std; //This is an evil line. It puts a lot of names in conflict. For example std::data. Alternative:
    // using namespace std::cout
    // usind namespace std::string

    using namespace first;

    int x = 0;

    std:: cout << second::x;
    

   }