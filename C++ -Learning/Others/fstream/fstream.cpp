#include <iostream>
#include <fstream>

using std::fstream;
using std::string;
int main() {
    fstream file;
    string address = "text.txt";
    string line;
    


    file.open(address, fstream::out);
    if(file.is_open()){
        file << "Hello World" << '\n';
        file.close();
    }
    

    file.open(address, fstream::app);
    if(file.is_open()){
        file << "Hola Mundo" << '\n';
        file.close();
    }
    
    file.open(address, fstream::in);
    
    if(file.is_open()){
        while(getline(file, line)){
            std::cout << line << '\n';
        }
        file.close();
    }

    return 0;
}