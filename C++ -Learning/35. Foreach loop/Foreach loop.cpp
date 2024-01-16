#include <iostream>

int main()
{
    // std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    // for(std::string students : students){
    //     std::cout << students << std::endl;
    // }


    int grades[] = {65, 72, 81, 93};
    // for each grade in grades
    for(int grade : grades){
        std::cout << grade << std::endl;
    }

    return 0;
}