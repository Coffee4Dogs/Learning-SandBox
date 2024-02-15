#include <iostream>


class Instrument {
    public:
        virtual void MakeSound(){
            std::cout << "The instrument is playing..." << '\n';
        }

};

class Accordion : public Instrument {
    public:
        void MakeSound(){
            std::cout << "Accordion is playing..." << '\n';
        }

};

int main() {

    Instrument* i1 = new Accordion();
    i1->MakeSound();
    

    return 0;
}