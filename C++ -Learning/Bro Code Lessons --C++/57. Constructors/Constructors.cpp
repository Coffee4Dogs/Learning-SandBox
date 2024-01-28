// constructor = special method that is automatically called when an object is instanciated
//                 usefull for assigning values to attributes as arguments

#include <iostream>

class Student{
    public:
        std::string name;
        int age;
        double gpa;
    

    //Constructor
    Student(std::string name, int age, double gpa){
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }


    // Another example of constructor:
    // Student(std::string x, int y, double z){
    //     name = x;
    //     age = y;
    //     gpa = z;
    // }

};


int main() {
    
    Student student1("Spongebob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);
    Student student3("Sandy", 21, 4.0);

    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';


    return 0;
}