#include <iostream>

//cout << (insertion operator)
//cin >> (extraction operator)


int main(){
    std::string name;
    int age;

    std::cout << "What is your age?" << "\n";
    std::cin>>age;

    std::cout << "What is your name?" << "\n";
    std:: getline(std::cin>> std::ws, name);

    std::cout<< "Hello " << name << "\n";
    std::cout<< "You are " << age << " old" << "\n";


    return 0;
}