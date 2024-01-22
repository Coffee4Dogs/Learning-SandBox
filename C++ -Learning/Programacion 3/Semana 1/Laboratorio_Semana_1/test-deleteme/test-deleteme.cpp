#include <iostream>
#include <list>

int main() {
    
    int list[] = {1,2,3,4};
    int x = 5;

    list.push_front(5);

    for(int numbers : list){
        std::cout << numbers << '\n';
    }


    return 0;
}