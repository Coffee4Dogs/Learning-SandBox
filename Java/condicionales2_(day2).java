
package condicionales2;


public class Condicionales2 {

    public static void main(String[] args) {
        
        int edad;
        edad = 26;
        /*
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
        */
        
        if(edad<18){
            System.out.println("Usted es un niño.");
        }
        
        
        else if(edad>=18 && edad <21){
            System.out.println("Es usted un joven");
        }
        
        
        else if(edad>=21 && edad <60){
            System.out.println("Es usted un Adulto");
        }
       
        
        else{
            System.out.println("Es usted un Adulto mayor");
        }
        
        
       
        
        
        
        
    }//Fin del metodo main.
    
}//Fin de la clase Condicionales.
