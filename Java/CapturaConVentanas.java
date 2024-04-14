
package capturaconventanas22;
import javax.swing.JOptionPane;


public class CapturaConVentanas22 {

    
    public static void main(String[] args) {
        

        // Type Casting.
        // Como convertir una variable de tipo string a tipo int.
        //Las ventanas solo pueden capturar texto (string). Hay que convertir el texto a numero.
        
        String sn1, sn2, s, sOp, rotulo;
        int n1, n2, Op; double resp; 
        
        n1=0; n2=0; Op = 0; rotulo = ""; resp = 0;

        
        
        s = "Menu\n";
        s = s+"1.Sumar\n";
        s = s+"2.Restar\n";
        s = s+"3.Multiplicar\n";
        s = s+"4.Dividir\n";
        s = s+"5.Salir\n";
        
        while(Op<5){
        
            sn1 = JOptionPane.showInputDialog(null,"Teclee un primer numero");
            sn2 = JOptionPane.showInputDialog(null, "Teclee un segundo numero");

            n1 = Integer.valueOf(sn1);
            n2 = Integer.valueOf(sn2);
            
            sOp = JOptionPane.showInputDialog(null, s); 
            Op = Integer.valueOf(sOp); //Convertir variable sOP a String

            if(Op==1){
                resp=n1+n2; rotulo="La suma es: ";
            }

            if(Op==2){
                resp=n1-n2; rotulo="La resta es: ";
            }

            if(Op==3){
                resp=n1*n2; rotulo="La multiplicacion es: ";
            }

            if(Op==4){
                resp=n1*1.0/n2; rotulo="La divicion es: ";
            }

            if(Op!=5){
                JOptionPane.showMessageDialog(null, rotulo + resp);
            }

        }
        System.out.println(s);
//        n1 = Integer.valueOf(sn1); n2 = Integer.valueOf(sn2);
//        System.out.println(n1+n2);
        
        

        
    }//Fin del metodo main.
    
}//Fin de la clase main.
