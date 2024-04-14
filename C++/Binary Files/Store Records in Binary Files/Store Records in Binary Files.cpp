#include <iostream>
#include <fstream> //ifstream, ofstream, fstream

using std::fstream;
using std::ios;


struct Record{
    char name[40];
    unsigned short age;
    float gp;
};



int main() {
    //filesteam file(address, Input/Output Stream::output)
    fstream f("record.dat", ios::out | ios::binary);
    Record rec{ "hank", 50, 3.8};

    if(f){
        // Flag
        f.write(reinterpret_cast<char*>(&rec), sizeof(Record));

        //closing
        f.close();
    }
    else{
        std::cout << "Error! Failed to open file!" << '\n';
    }

    Record rec2;

    f.open("record.dat", std::ios::in | ios::binary);
    if(f){
        //Flag
        f.read(reinterpret_cast<char*>(&rec2), sizeof(Record));
        

        //Content
        std::cout << rec2.name <<" " << rec2.age << " " << rec2.gp << '\n';
        
        //Close
        f.close();
    }
    else{
        std::cout << "Error! Failed to open file!" << '\n';
    }


    return 0;
}