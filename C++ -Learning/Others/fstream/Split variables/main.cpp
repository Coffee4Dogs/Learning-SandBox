#include <iostream>
#include <fstream>

using std::fstream;
using std::string;
using std::getline;
using std::cin;

int main() {
    
    fstream file;
    string address = "text.txt";
    string line;

    int id;
    string name;
    string lastnameA;
    string lastnameB;

    file.open(address, fstream::in);
    if(file.is_open()){
        
        //code
        std::cout << "You open the file" << '\n';

        // while(getline(file, line)){
        for(int i = 0; i < 10; i++){
            file >> id >> name >> lastnameA >> lastnameB;
            std::cout <<  " " << id <<  " " << name <<  " " << lastnameA <<  " " << lastnameB << std::endl;
        }



        file.close();
    }

    return 0;
}