#include <iostream>



int IndexOf(int list_input[], int size_input, int number_input){
    for(int i = 0; i < size_input; i++){
        if(list_input[i]==number_input){
            return i;
        }
    }

    return -1;
}


int main()
{
    
    int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(list)/sizeof(list[0]);
    int index;
    int number;

    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;
    
    
    index = IndexOf(list, size, number);
    std::cout << "You entered " << number << std::endl;

    if(index != -1){
        std::cout << "The index is: " << index << std::endl;
    }
    else{
        std::cout << "The " << number << " is not in the list."<< std::endl;
    }
    




    return 0;
}


