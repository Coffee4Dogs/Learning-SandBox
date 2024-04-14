#include <iostream>
#include <vector>
// https://www.youtube.com/watch?v=dQG41m6vf3A

int main() {
    
    std::vector<std::string> Fruits = {"Apple", "Banana", "Orange", "Mango", "Grapes"};
    
    std::vector<std::string> Vegetables;
    Vegetables = {"Carrot", "Broccoli", "Tomato", "Zucchini", "Sweet Potato"};
    
    Fruits.push_back("Tortillas");

    for(int i=0; i<Fruits.size(); i++){
        std::cout << Fruits[i] << '\n';
    }    


    // for(std::string i: Fruits){
    //     std::cout << i << '\n';
    // }

    return 0;
}