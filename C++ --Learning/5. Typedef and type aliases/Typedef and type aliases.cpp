#include <iostream>
#include <vector>

//A common convencion for typedef is to use:  _t
//typedef std::vector<std::string, int>> pairlist_t

// typedef std::string String_t;
// typedef int var;

using String_t = std::string;
using var = int;


int main(){

// Typedef = >  Used to create aliases or alternative names for existing 
//              data types. Its main purpose is to improve code readability
//              and maintainability. Reduce typos and things like that.


    //Old way:
    // std::string First_Name = "Coffee4Dogs";
    // std::cout << First_Name;

    String_t FirstName = "Coffee4Dogs";
    var age = 21;

    std::cout << FirstName << "\n";
    std::cout << age << "\n";

    return 0;
}