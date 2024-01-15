#include <iostream>

// Global Variable
int myNum = 3;

void printNum(){
    int myNum = 1;
    std::cout << ::myNum << std::endl;
}


int main()
{

    //:: will print the global version of the variable.

    int myNum = 2;
    printNum();
    std::cout << ::myNum << std::endl;



    return 0;
}