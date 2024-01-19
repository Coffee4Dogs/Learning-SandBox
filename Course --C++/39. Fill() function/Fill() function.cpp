#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    //         fill(begin (array name), end (array name + 100), value)

    const int SIZE = 99;
    std::string foods[SIZE]; 
    fill(foods, foods + SIZE/3, "pizza");
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Hamburgers");
    fill(foods + (SIZE/3)*2, foods + SIZE, "Hot-Dogs");
    for(std::string food : foods){
        std::cout << food << std::endl;

    }
    
    





    return 0;
}