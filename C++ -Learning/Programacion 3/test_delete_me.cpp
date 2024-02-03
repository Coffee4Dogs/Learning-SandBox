#include <iostream>

class Instrument{
    private:
        std::string Color = "No Color Defined";      // Red, Blue, Black, Orange, etc..
        double Width = 0.0;                         // 3.5, 4.8, 8.2
        double Height = 0.0;                        // 3.5, 4.8, 8.2
        std::string Tone = "No Tone";               //C5 D5 E5 F5 G5 A5 B5
        bool IsInstrument = true;

    public:
        Instrument(std::string Color, double Width, double Height, std::string Tone, bool IsInstrument){
        this->Color = Color;    
        this->Width = Width;          
        this->Height = Height;     
        this->Tone = Tone;
        this->IsInstrument = IsInstrument;
        }

        //Set Functions
            void SetColor(std::string temp){
                Color = temp;
            }
           
            void SetWidth(double temp){
                Width = temp;
            }
            
            void SetHeight(double temp){
                Height = temp;
            }
            
            void SetTone (std::string temp){
                Tone = temp;
            }
            
            bool SetIsInstrument(bool temp){
                IsInstrument = temp;
            }


        //Get Functions
            std::string GetColor(){
                return Color;
            }

            double GetWidth(){
                return Width;
            }

            double GetHeight(){
                return Height;
            }

            std::string GetTone(){
                return Tone;
            }

            bool GetIsInstrument(){
                return IsInstrument;
            }


    
        void PlayMusic(){
            std::cout << "You are playing music! :D" << std::endl;
        }

        void AboutInstrument(){
            std::cout << "You are playing an instrument color: "<< Color << '\n';
        }

    Instrument(){}
    ~Instrument(){}
};

class ChordString : public Instrument{
    private: 
        int NumberStrings = 0;

    public:
        ChordString(int NumberStrings){
            this->NumberStrings = NumberStrings;
        }

        void SetNumberStrings(int temp){
            NumberStrings = temp;
        }
        
        int GetNumberStrings(){
            return NumberStrings;
        }



    ChordString(){}
    ~ChordString(){}
};



int main() {
    Instrument Headphones;
    ChordString Guitar;
    Headphones.SetColor("Red");
    std::cout << "Your headphones are: " << Headphones.GetColor() << '\n';
    
    Guitar.SetColor("Dark");
    std::cout << "Your Guitar is: " << Guitar.GetColor() << '\n';
    
    return 0;
}