

package ciclos22;



public class Ciclos22 {

    
    public static void main(String[] args) {
        
        /*
        for(int k=1; k<=72524; k++){
            System.out.println("Juan"+k);
        }
        */
        
        
        int c = 0;
                
        for(int año = 2022; año < 2023; año++){
            for(int mes = 1; mes < 12; mes++){
            System.out.println("Mes = " + mes + " Año= "+año);
                for(int dia = 1; dia <= 30; dia++){
                    c=c+1;
                    System.out.print(dia + ",")
                    System.out.print("");
                }
            }
        }
        System.out.println("Dias transcurridos=" +c);
        
    }//Fin del metodo main.
    
}//Fin de la clase main.
