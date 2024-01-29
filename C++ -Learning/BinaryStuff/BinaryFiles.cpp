#include <iostream>
#include <fstream> //fstream
using namespace std;
int main() {
    // fstream myFile;

    //the name of the file. If doesnt exist it will be created.
    //Mode: write
    
    
    // myFile.open("saldina.txt", ios::out);
    // if(myFile){
    //     myFile << "Hello" << '\n';
    //     myFile << "This is second line" << '\n';
    //     myFile.close();
    // }

    // myFile.open("saldina.txt", ios::app);//append
    // if(myFile){
    //     myFile << "Hello2" << '\n';
        
    //     myFile.close();
    // }



    fstream myFile;
    myFile.open("saldina.txt", ios::in);//read
    std::string line;
    std::getline(myFile, line);
    std::cout << "Lines of text: " << line << '\n';

    while(std::getline(myFile, line)){
        std::cout << line << '\n';
    }
    myFile.close();
    

    




    return 0;
}