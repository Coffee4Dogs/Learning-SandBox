#include <iostream>

typedef std::string String;

void bubble_sort(String list[], int size);
void presentacion(String list[], int size);
void experiencia_laboral(bool MiPrimeraChamba);
int main()
{
    String list[] = {"React","Docker","C++"};
    int size = sizeof(list)/sizeof(list[0]);
    presentacion(list, size);
    return 0;
}

// Presentacion
void presentacion(String list[], int size){
    std::cout << "Hola mi nombre es Jack. :) Y aproveche mis vacaciones para estudiar un poco de: " << std::endl;
    bubble_sort(list, size);
    for(int i = 0; i < size; i ++){
        std::cout << list[i] << ", ";
    }
    fill(list, list + size, "Python" );
    std::cout << "pero toda la vida me ha gustado puro " << list[0] <<"." << std::endl;
    bool MiPrimeraChamba = true;
    String exp_laboral;
    std::cout << "He trabajado?" << std::endl;
    MiPrimeraChamba ? exp_laboral = "Si, en muchos call center." : exp_laboral = "No, aun no trabajo.";
    std::cout << exp_laboral << std::endl;
    std::cout << "\nMe esta encantando C++ ya que durante el aprendizaje" << std::endl;
    std::cout << "me he dado cuenta de lo que pasa por detras de la computadora." << std::endl;
    String enfermedad = "epilepsia";
    std::cout << "Hace unos años retome mis estudios por mi enfermedad, "<< enfermedad << std::endl;

}


// Bubble bubble_sort
void bubble_sort(String list[], int size){
    String temp;

    for(int i = 0 ; i < size - 1 ; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            } 
        }
    }
}



