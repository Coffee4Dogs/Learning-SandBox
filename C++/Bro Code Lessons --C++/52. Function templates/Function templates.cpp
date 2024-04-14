// function template = describes what a function looks like.
//                     Can be used to generate as many overloaded functions
//                     as needed, each using different data types.


#include <iostream>

// int max(int x, int y){
//     return (x > y) ? x : y;
// }

// double max(double x, double y){
//     return (x > y) ? x : y;
// }

// char max(char x, char y){
//     return (x > y) ? x : y;
// }

// A template is a cookie-cutter that specifies how to cut cookies 
// that all look pretty much the same
// (although the cookies can be made of various kinds of dough, 
// they’ll all have the same basic shape).

template <typename T, typename U>

auto max(T x, U y){
    return (x > y) ? x : y;
}

int main() {
    //no mixing, ok like 1, 1.2
    std::cout << max(1, 2.1) << '\n';

    return 0;
}