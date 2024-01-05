#include <iostream>

int main(){

    //int (Integer)
    int age = 21;
    int year = 2023;
    int days = 7.5; //This value is truncated.

    std::cout << days << "\n";

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    std::cout << price << "\n";

    //char (single character)
    char grade = 'A';
    char initial = 'C';
    char currency = '$';

    std :: cout << currency << "\n";

    //boolean (true or false)

    bool student = true;
    bool power = false;
    bool forSale = false;

    std :: cout << power << "\n";

    //string (objects that represent a sequence of text)

    std :: string name = "Coffee4Dogs";
    std :: string day = "Friday";
    std :: string food = "pizza";
    std :: string adress = "123 Fake St.";

    std :: cout << food << "\n";

    //Example:
    std::cout << "\n" << "Hello " << name << "."<< std::endl;
    std::cout << "You are " << age << " years old." << std::endl;

    return 0;
}