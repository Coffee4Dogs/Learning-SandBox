#include <iostream>



class Phone{
    
    std::string Color; //negro, azul, blanco
    int Camera; //20, 19
    std::string Model; //iPhone, Android
    int Year; //2020, 2021, 2022, 2023, 2024

    //Constructor
    Phone(){

    }

    Phone(std::string Color, int Camera, std::string Model, int Year){
        Color = Color;
        Camera = Camera;
        Model = Model;
        Year = Year;

    }

    //Destructor
    ~Phone(){

    }



    



};


int main() {
    
    return 0;
}