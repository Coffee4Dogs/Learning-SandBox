#include <iostream>


double Area_Square(double lenght){
    return lenght * lenght;
}


int main()
{

    double lenght = 5.0;
    double area =  Area_Square(lenght); 
    std::cout << "Area: " << area << " cm^2\n" << std::endl;




  return 0;
}