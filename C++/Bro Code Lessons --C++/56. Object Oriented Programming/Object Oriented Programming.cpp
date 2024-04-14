// Object = A collection of attributes and methods.
//         They can have characteristics and could perform actions.
//         Can be used to mimic real world items (Ex. Phone, Book, Dog)
//         Created from a class which acts as a "blue-print"


#include <iostream>

class Human{

    //Attributes
    public:
        std::string name = "default name";
        std::string occupation = "default occupation";
        int age = 6;


    //Methods (Something that the object can do)
    void eat(){
        std::cout << "This person is eating." << '\n';
    }

    void drink(){
        std::cout << "This person is drinking." << '\n';
    }

    void sleep(){
        std::cout << "This person is sleeping." << '\n';
    }
};



int main() {

    Human human1;
    Human human2;
    Human human3;


    human1.name = "Rick";
    human1.occupation = "Scientist";
    human1.age = 70;

    human2.name = "Morty";
    human2.occupation = "Student";
    human2.age = 15;

   
    



    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
    
    std::cout << human3.name << '\n';
    std::cout << human3.occupation << '\n';
    std::cout << human3.age << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();




    return 0;
}