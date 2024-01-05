
package condicionales;


public class Condicionales {

 
    public static void main(String[] args) {

        //5+3*4+7*3-20/5+7*3-3*15
        int n;
        n = 5+3*4+7*3-20/5+7*3-3*15;
        System.out.println(n);


        int edad;
        edad = 15;
        
        if(edad<18){
            System.out.println("Usted es un niño.");//Niño
        }
        
        if(edad>=18 && edad <21){
            System.out.println("Es usted un joven"); //Joven
        }
        
        
        if(edad>=21 && edad <60){
            System.out.println("Es usted un Adulto");//Adulto
        }
        
        
        if(edad>=60){
            System.out.println("Es usted un Adulto mayor");//Adulto Mayor
        }
        
        
        
    }//Fin del metodo main.
    
}//Fin de la clase Condicionales.

