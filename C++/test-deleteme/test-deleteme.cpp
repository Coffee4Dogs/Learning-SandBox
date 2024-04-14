#include <iostream>
#include <string>
using std::string;



string CaesarCipher(int shift, string line){
    string NewLine = "";
    int size = line.size();
    char temp;

    for(int i = 0; i < size; i++){
        temp = line.at(i);
        temp = temp + shift;
        NewLine = NewLine + temp;
    }
    return NewLine;
}


int main() {

    string Text = "Juancho";
    std::cout << CaesarCipher(5, Text) << '\n';


    

    
    



    return 0;
}