#include <iostream>


int searchArray(int Array[], int size, int element);


int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum; //the number I am looking

    std::cout << "Enter element to search for: " << std::endl;
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << myNum << " is at index " << index << std::endl;
    }
    
    else{
        std::cout << myNum << "is not in the array" << std::endl;
    }


    return 0;
}

int searchArray(int Array[], int size, int element){

    for(int i=0; i < size; i++){
        if(Array[i] == element){
            return i;

        }
    }

    return -1; //this means that something wasn't found.


}