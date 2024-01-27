// struct = A structure that group related variables under one name
//         structs can contain many different data types (string, int, double, bool, etc.)
//         variables in a struct are known as "members"
//         members can be access with . "Class Member Access Operator"


#include <iostream>


struct student{
    std::string name;
    double gpa;
    bool enrolled = true;
};



int main() {

    student student1;
    student student2;
    student student3;
    
    
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student3.name = "Squidward";
    student3.gpa = 1.5;


    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';
    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';
    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';



    return 0;
}