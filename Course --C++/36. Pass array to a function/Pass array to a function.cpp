#include <iostream>


double getTotal(double prices[], int n){
    
    double total = 0;
    for(int i = 0; i < n; i++){
        total += prices[i];
        
    }

    return total;
}

int main()
{

    double prices[] = {49.99, 15.05, 75, 9.99};
    double total = 0;
    int n = sizeof(prices)/sizeof(double);
    
    total = getTotal(prices, n);

    std::cout << total << std::endl;



    return 0;
}