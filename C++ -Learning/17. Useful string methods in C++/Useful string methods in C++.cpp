#include <iostream>

int main()
{
    
    std::string name;
    std:: cout << "Enter your name" << std::endl;
    
    // std::getline(std::cin, name);
    
    // if(name.length() > 12){
    //     std::cout << "Your name can't be over 12 characters" << std::endl;
    // }
    // else{
    //     std::cout << "Welcome" << std::endl;
    // }

    
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "You didn't enter your name" << std::endl;
    }
    else{
        std::cout << "Hello " << name << std::endl;
    }

    // This will clear or remove
    // name.clear();

    name.append("gmail.com");
    std::cout << "Your username is now: \n" << name << std::endl;

    // Return a specific character by telling the index:
    //First index is 0
    std::cout << name.at(0) << std::endl;
    std::cout << name << std::endl;

    // Insert something
    name.insert(name.length() - 9, "@");
    std::cout << name << std::endl;

    // This method finds things. In this case, spaces.
    std::cout << "Spaces" << name.find(' ') << std::endl;

    // We can errase a portion of a string
    // (A begining index, An ending Index.)
    name.erase(name.length() - 10, name.length());
    std::cout << name << std::endl;
    
    return 0;
}
