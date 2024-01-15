#include <iostream>

int main()
{

    std::string students[] = {"Spongebob", "Patrick", "Squidward"};
    

    for (int i = 0; i <= sizeof(students)/sizeof(std::string) - 1; i++){
        std::cout << students[i] << std::endl;   

    }
    


    return 0;
}