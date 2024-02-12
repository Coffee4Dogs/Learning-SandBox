#include <iostream>
#include <queue>

using std::queue;
using std::string;
int main() {
    
    queue<string> miqueue;
    miqueue.push("karen");
    miqueue.push("normal customer");
    miqueue.push("megakaren");
    std::cout << miqueue.front() << '\n';
    std::cout << miqueue.back() << '\n';


    // while(!(miqueue.empty())){
    //     std::cout << miqueue.front() << '\n';
    //     miqueue.pop();
    // }

    
    

    return 0;
}