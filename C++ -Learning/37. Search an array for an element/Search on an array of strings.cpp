#include <iostream>

int SearchArray(std::string food_input, std::string list_input[], int size_input){
    for(int i = 0; i < size_input; i++){
        if(list_input[i] == food_input){
            //Return the number selected
            return i;
        }

    }

    //The Number Selected is not in the list.
    return -1;

}

int main()
{

    std::string list[] = {"Pizza", "Hamburger", "Hot-Dog"};
    std::string food;
    int index;
    int size = sizeof(list)/sizeof(list[0]);

    

    std::cout << "Insert the element you want to search: " << std::endl;
    std::getline(std::cin, food);

    index = SearchArray(food, list, size);
    


    if(index != -1){
        std::cout << "You selected: " << food << " and the index is: " << index << std::endl;
    }
    else{
        std::cout << "The element " << food << "is not in the list." << std::endl;
    }


    return 0;
}