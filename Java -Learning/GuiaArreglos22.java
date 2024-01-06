


package com.mycompany.guiaarreglos22;



public class GuiaArreglos22 {


    public static void decoration() {
        String line = "*****************************************************************";
        System.out.println(line);

    }// Fin del metodo decoration.

    public static void Imprime_Arreglo(int X[]) {
        int n = X.length;
        n = n - 1;
        for (int k = 0; k <= n; k++) {
            System.out.print(X[k] + "\t");
        }
    }// Fin del metodo Imprime_Arreglo

    public static void Ejercicio1(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 1 ************");
        System.out.println("\t\t\t" + "Imprima los números del arreglo.");
        decoration();
        Imprime_Arreglo(A);
        System.out.println("\n");

    }// Fin del metodo Ejercicio1

    public static void Ejercicio2(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 2 ************");
        System.out.println("\t\t\t" + "Sume los números del arreglo.");
        decoration();
        int sum = 0;

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            sum = sum + A[k];
        }

        System.out.println("La suma de los numeros es: " + sum);

        System.out.println("\n");

    }// Fin del metodo Ejercicio2

    public static void Ejercicio3(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 3 ************");
        System.out.println("\t\t\t" + "Imprima los números pares del arreglo.");
        decoration();

        System.out.print("Los numeros pares son: ");
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 2 == 0) {
                System.out.print(A[k] + " ");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio3

    public static void Ejercicio4(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 4 ************");
        System.out.println("\t\t\t" + "Imprima los números impares del arreglo.");
        decoration();

        System.out.print("Los numeros impares son: ");
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (!(A[k] % 2 == 0)) {
                System.out.print(A[k] + " ");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio4

    public static void Ejercicio5(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 5 ************");
        System.out.println("\t\t\t" + "Cuente los números pares del arreglo.");
        decoration();

        System.out.print("La cantidad de numeros pares es la siguiente: ");
        int c = 0; // contador
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 2 == 0) {
                // System.out.print(A[k]+" ");
                c = c + 1;
            } // fin del condicional
        } // fin del for

        System.out.println(c);

        System.out.println("\n");

    }// Fin del metodo Ejercicio5

    public static void Ejercicio6(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 6 ************");
        System.out.println("\t\t\t" + "Cuente los números impares del arreglo.");
        decoration();

        System.out.print("La cantidad de numeros impares es la siguiente: ");
        int c = 0; // contador
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (!(A[k] % 2 == 0)) {
                // System.out.print(A[k]+" ");
                c = c + 1;
            } // fin del condicional
        } // fin del for

        System.out.println(c);

        System.out.println("\n");

    }// Fin del metodo Ejercicio6

    public static void Ejercicio7(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 7 ************");
        System.out.println("\t\t\t" + "Sume los números pares del arreglo.");
        decoration();

        int c = 0; // contador
        int sumac = 0;
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 2 == 0) {
                sumac = sumac + A[k];
            } // fin del condicional
        } // fin del for

        System.out.println("La suma de los numeros pares es: " + sumac);

        System.out.println("\n");

    }// Fin del metodo Ejercicio7

    public static void Ejercicio8(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 8 ************");
        System.out.println("\t\t\t" + "Sume los números impares del arreglo.");
        decoration();

        int c = 0; // contador
        int sumax = 0;
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (!(A[k] % 2 == 0)) {
                sumax = sumax + A[k];
            } // fin del condicional
        } // fin del for

        System.out.println("La suma de los numeros pares es: " + sumax);

        System.out.println("\n");

    }// Fin del metodo Ejercicio8

    public static void Ejercicio9(int A[]) { // Imprime al revez
        System.out.println("\t\t\t" + "************* Ejercicio 9 ************");
        System.out.println("\t\t\t" + "Imprima los números del arreglo en forma inversa.");
        decoration();

        int n = A.length;
        int y;

        for (int k = 0; k <= n - 1; k++) {
            y = n - 1 - k;
            System.out.print(A[y] + "\t");
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio9

    public static void Ejercicio10(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 10 ************");
        System.out.println("\t\t\t" + "Imprima los numeros divisibles entre 3.");
        decoration();

        System.out.print("Los numeros impares son: ");
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 3 == 0) {
                System.out.print(A[k] + " ");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio10

    public static void Ejercicio11(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 11 ************");
        System.out.println("\t\t\t" + "Cuente los numeros divisibles de 3.");
        decoration();

        System.out.print("La cantidad de numeros divisibles por 3 es: ");
        int v = 0;// contador
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 3 == 0) {
                v = v + 1;
            } // fin del condicional
        } // fin del for
        System.out.println(v);
        System.out.println("\n");

    }// Fin del metodo Ejercicio11

    public static void Ejercicio12(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 12 ************");
        System.out.println("\t\t\t" + "Sume los numeros divisibles de 3");
        decoration();

        int c = 0; // contador
        int sumac = 0;
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 3 == 0) {
                sumac = sumac + A[k];
            } // fin del condicional
        } // fin del for

        System.out.println("La suma de los numeros divisibles entre 3 es: " + sumac);

        System.out.println("\n");

    }// Fin del metodo Ejercicio12

    public static void Ejercicio13(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 13 ************");
        System.out.println("\t\t\t" + "Reste a la suma de numeros pares la suma de los impares.");
        decoration();

        int suma_pares = 0;
        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 2 == 0) {
                suma_pares = suma_pares + A[k];
            } // fin del condicional
        } // fin del for

        int suma_impares = 0;
        for (int k = 0; k <= n - 1; k++) {
            if (!(A[k] % 2 == 0)) {
                suma_impares = suma_impares + A[k];
            } // fin del condicional
        } // fin del for

        int resultado = 0;
        resultado = suma_pares - suma_impares;
        System.out.println("La suma de los pares - impares es: " + resultado);

        System.out.println("\n");

    }// Fin del metodo Ejercicio13

    public static void Ejercicio14(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 14 ************");
        System.out.println("\t\t\t" + "Imprima los números de posición par (0,2,4,6,8)");
        decoration();

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (k % 2 == 0) {
                System.out.print(A[k] + "\t");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio14

    public static void Ejercicio15(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 15 ************");
        System.out.println("\t\t\t" + "Imprima los numeros de posicion impar (1,3,5,7,9)");
        decoration();

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (!(k % 2 == 0)) {
                System.out.print(A[k] + "\t");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio15

    public static void Ejercicio16(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 16 ************");
        System.out.println("\t\t\t" + "Imprima los números mayores a 20 del arreglo.");
        decoration();

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] > 20) {
                System.out.print(A[k] + "\t");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio16

    public static void Ejercicio17(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 17 ************");
        System.out.println("\t\t\t" + "Imprima los números menores e iguales a 50 del arreglo.");
        decoration();

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] <= 50) {
                System.out.print(A[k] + "\t");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio17

    public static void Ejercicio18(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 18 ************");
        System.out.println("\t\t\t" + "Imprima los números mayores a 20 y menores o iguales a 50 del arreglo.");
        decoration();

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] > 20 && A[k] <= 50) {
                System.out.print(A[k] + "\t");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio18

    public static void Ejercicio19(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 19 ************");
        System.out.println("\t\t\t" + "Imprima los numeros mayores a 20 o menores o iguales a 50 del arreglo.");
        decoration();

        int n = A.length;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] > 20 || A[k] <= 50) {
                System.out.print(A[k] + "\t");
            } // fin del condicional
        } // fin del for

        System.out.println("\n");

    }// Fin del metodo Ejercicio19

    public static void Ejercicio20(int A[], int Buscar) {
        System.out.println("\t\t\t" + "************* Ejercicio 20 ************");
        System.out.println(
                "\t\t\t" + "Haga un programa que encuentre un numero x, si se encuentra imprima la posicion en " + "\n"
                        + "\t\t\t" + "el arreglo, sino imprima el titulo rotulo numero no encontrado");
        decoration();

        int n = A.length;
        int index = 0;
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] == Buscar) {
                index = A[k];
            }

        } // fin del for

        if (index == Buscar) {
            System.out.println("Para: " + Buscar + " el indice es: " + index + ". El numero ingresado fue: " + Buscar);
        }

        else {
            System.out.println("Numero no encontrado para: " + Buscar);
        }

        System.out.println("\n");

    }// Fin del metodo Ejercicio20

    public static void Ejercicio21(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 21 ************");
        System.out.println("\t\t\t" + "Encuentre el numero menor del arreglo.");
        decoration();

        int n = A.length;
        int comparador = 0;
        comparador = A[0];
        for (int k = 0; k <= n - 1; k++) {

            if (A[k] < comparador) {
                comparador = A[k];
            }

        } // fin del for
        System.out.println("El numero minimo es: " + comparador);

        System.out.println("\n");

    }// Fin del metodo Ejercicio21

    public static void Ejercicio22(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 22 ************");
        System.out.println("\t\t\t" + "Encuentre el numero mayor del arreglo.");
        decoration();

        int n = A.length;
        int comparador = 0;
        comparador = A[0];
        for (int k = 0; k <= n - 1; k++) {

            if (A[k] > comparador) {
                comparador = A[k];
            }

        } // fin del for
        System.out.println("El numero mayor es: " + comparador);

        System.out.println("\n");

    }// Fin del metodo Ejercicio22

    public static void Ejercicio23(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 23 ************");
        System.out.println("\t\t\t" + "Ordene el arreglo de menor a mayor.");
        decoration();

        int n = A.length;

        // Bubble Sort Algorythm - Algoritmo de Ordenamiento de Burbuja
        for (int k = 0; k < n - 1; k++) {
            for (int j = 0; j < n - k - 1; j++) {
                // Intercambiar Valores en j y k.
                if (A[j] > A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;

                } // fin del if
            } // fin del for j
        } // fin del for k

        // Imprimir resultado
        for (int k = 0; k <= n - 1; k++) {
            System.out.print(A[k] + " ");
        }

        System.out.println("\n");

    }// Fin del metodo Ejercicio23

    public static void Ejercicio24(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 24 ************");
        System.out.println("\t\t\t" + "Ordene el arreglo de mayor a menor.");
        decoration();

        int n = A.length;

        // Bubble Sort Algorythm - Algoritmo de Ordenamiento de Burbuja
        for (int k = 0; k < n - 1; k++) {
            for (int j = 0; j < n - k - 1; j++) {
                // Intercambiar Valores en j y k.
                if (A[j] < A[j + 1]) {
                    int temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;

                } // fin del if
            } // fin del for j
        } // fin del for k

        // Imprimir resultado
        for (int k = 0; k <= n - 1; k++) {
            System.out.print(A[k] + " ");
        }

        System.out.println("\n");

    }// Fin del metodo Ejercicio24
    
    
    
    public static void Ejercicio25(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 25 ************");
        
        int n = A.length;
        int Pares[]={0,0,0,0,0,0,0,0,0,0};
        int Impares[]={0,0,0,0,0,0,0,0,0,0};
        
        //Numeros Impares
        for (int k = 0; k <= n - 1; k++) {
            if (!(A[k] % 2 == 0)) {
                Impares[k]= A[k];
            } // fin del condicional
        } // fin del for
        
        //Numeros Pares
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 2 == 0) {
                Pares[k] = A[k];
            } // fin del condicional
        } // fin del for
        
        
        // --IMPRIMIR NUMEROS Impares--
        System.out.println("Numeros Impares: \n");
        for (int k = 0; k <= n - 1; k++) {
            if(Impares[k]==0){
                System.out.print("");
            }    
            else{
                System.out.print(Impares[k]+" ,"); 
            }
        } // fin del for
        
        System.out.println("\n");
        // --IMPRIMIR NUMEROS Pares--
        System.out.println("Numeros Pares: \n");
        for (int k = 0; k <= n - 1; k++) {
                if(Pares[k]==0){
                    System.out.print("");
                }
                else{
                    System.out.print(Pares[k]+" ,");
                }
                
        } // fin del for
        
        //Intercambiar los arreglos:
        int Temporal[] = {0,0,0,0,0,0,0,0,0,0};
        
        for(int k = 0; k <= n-1; k++){
            Temporal[k] = Pares[k];
            Impares[k] = Pares[k];
            Pares[k] = Temporal[k];
        }
        System.out.println("\n");
        
        
        // --IMPRIMIR NUMEROS Impares--
        System.out.println("Numeros Impares: \n");
        for (int k = 0; k <= n - 1; k++) {
            if(Impares[k]==0){
                System.out.print("");
            }    
            else{
                System.out.print(Impares[k]+" ,"); 
            }
        } // fin del for
        
        System.out.println("\n");
        // --IMPRIMIR NUMEROS Pares--
        System.out.println("Numeros Pares: \n");
        for (int k = 0; k <= n - 1; k++) {
                if(Pares[k]==0){
                    System.out.print("");
                }
                else{
                    System.out.print(Pares[k]+" ,");
                }
                
        } // fin del for
        
        
        
        

        System.out.println("\n");

    }// Fin del metodo Ejercicio25
    
    
    public static void Ejercicio26(int A[]) {
        System.out.println("\t\t\t" + "************* Ejercicio 26 ************");
    
    int n = A.length;
        int Pares[]={0,0,0,0,0,0,0,0,0,0};
        int Impares[]={0,0,0,0,0,0,0,0,0,0};
        int C[]={0,0,0,0,0,0,0,0,0,0};
        //Numeros Impares
        for (int k = 0; k <= n - 1; k++) {
            if (!(A[k] % 2 == 0)) {
                Impares[k]= A[k];
            } // fin del condicional
        } // fin del for
        
        //Numeros Pares
        for (int k = 0; k <= n - 1; k++) {
            if (A[k] % 2 == 0) {
                Pares[k] = A[k];
            } // fin del condicional
        } // fin del for
        
        
        // --IMPRIMIR NUMEROS Impares--
        System.out.print("A: (impares) \n");
        for (int k = 0; k <= n - 1; k++) {
            if(Impares[k]==0){
                System.out.print("");
            }    
            else{
                System.out.print(Impares[k]+" ,"); 
            }
        } // fin del for
        
        System.out.println("\n");
        // --IMPRIMIR NUMEROS Pares--
        System.out.print("B: (pares) ");
        for (int k = 0; k <= n - 1; k++) {
                if(Pares[k]==0){
                    System.out.print("");
                }
                else{
                    System.out.print(Pares[k]+" ,");
                }
                
        } // fin del for
        
        System.out.println("\n");
        
         // --IMPRIMIR NUMEROS Pares--
        System.out.print("C: ");
        for (int k = 0; k <= n - 1; k++) {
                C[k]=Pares[k]-Impares[k];
                System.out.print(C[k] + " ");
        } // fin del for
        
        
        
        
    
    
    }// Fin del metodo Ejercicio26
    
    public static void main(String[] args) {
        int A[] = { 24, 39, 19, 36, 22, 57, 91, 16, 73, 45 };

        Ejercicio1(A);
        Ejercicio2(A);
        Ejercicio3(A);//Pares
        Ejercicio4(A);//Impares
        Ejercicio5(A);
        Ejercicio6(A);
        Ejercicio7(A);
        Ejercicio8(A);
        Ejercicio9(A);
        Ejercicio10(A);
        Ejercicio11(A);
        Ejercicio12(A);
        Ejercicio13(A);
        Ejercicio14(A);
        Ejercicio15(A);
        Ejercicio16(A);
        Ejercicio17(A);
        Ejercicio18(A);
        Ejercicio19(A);
        Ejercicio20(A, 91); //En el #91 ingresamos el num que vamos a buscar.
        Ejercicio21(A);
        Ejercicio22(A);
        Ejercicio23(A);
        Ejercicio24(A);
        Ejercicio25(A);
        Ejercicio26(A);
            
        
        
        
        

    }// fin del metodo main.

}// fin de la clase main
