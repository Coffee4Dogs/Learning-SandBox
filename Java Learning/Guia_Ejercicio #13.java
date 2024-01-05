

package ejercicio13;



public class Ejercicio13 {

    
    
    public static void main(String[] args) {
        
        int e1 = 5, e2 = 14, e3 = 9, e4 = 12, e5 = 15;
        String se1 = "---"; String se2 = "---"; String se3 = "---"; String se4 = "---"; String se5 = "---";
        
        
        for(int k = 20; k >= 1; k--){
            if(k ==e1) se1 = "***";
            if(k ==e2) se2 = "***";
            if(k ==e3) se3 = "***";
            if(k ==e4) se4 = "***";
            if(k ==e5) se5 = "***";
            System.out.println(k+"\t"+se1+"\t"+se2+"\t"+se3+"\t"+se4+"\t"+se5);  
        }
        System.out.println("===============================================");

    }//Fin del metodo main.
    
}//Fin de la clase main.
