#include <iostream>
#include <map>

// { {51, “Aguilar”}, {25, “Lopez”}, {13, “Zavala”}, {89, “Fernandez”}, {74, “Ruiz”} }

using std::map;
using std::pair;
using std::string;
// using namespace std;
int main() {
    
    // {{51, “Aguilar”}, 
    // {25, “Lopez”}, 
    // {13, “Zavala”}, 
    // {89, “Fernandez”}, 
    // {74, “Ruiz”}}

    map<int, string> Mapa1 = {  {51, "Aguilar"},
                                {25, "Lopez"},
                                {13, "Zavala"},
                                {89, "Fernandez"},
                                {74, "Ruiz"}};

    Mapa1[15]="Jorge";

    pair<int, string> Pair1(16, "Alexander");
    Mapa1.insert(Pair1);

    std::cout << Mapa1[16] << '\n';    

    std::cout << "The size of the map is: " << Mapa1.size() << '\n';

    std::cout << "First element of Pair1: "<< Pair1.first << '\n';
    std::cout << "Second element of Pair1: "<< Pair1.second << '\n';

    // Mapa1.clear();

    for(auto i = Mapa1.begin(); i!= Mapa1.end(); ++i){
        std::cout << i->first << (*i).second << std::endl;
    }

    

    return 0;
}