
package capturadedatos22;
import java.util.Scanner;



public class CapturaDeDatos22 {

    
    public static void main(String[] args) {
        String nombre;
        Double altura;
        int n1, n2;
        double resp;
        Scanner Captura = new Scanner(System.in);
        System.out.println("Por favor escriba su nombre: ");
        nombre = Captura.next();
        System.out.println("Ingrese su altura: ");
        altura = Captura.nextDouble();
        System.out.println("Hola "+nombre+". Bienvenido al Curso.");
        System.out.println("Su altura es: "+altura +" metros");
        
        System.out.println("Escriba un primer numero.");
        n1 = Captura.nextInt();
        System.out.println("Escriba un segundo numero.");
        n2 = Captura.nextInt();
        
//        n2 = Captura.nextDouble();
        resp = n1 + n2; System.out.println("La suma es: "+ resp);
        resp = n1 - n2; System.out.println("La resta es: "+ resp);
        resp = n1 * n2; System.out.println("La multiplicacion es: "+ resp);
        resp = n1*1.0 / n2; System.out.println("La divicion es: "+ resp);
         
        
        
        
        
        
    } //Fin del metodo Main
    
} // Fin de la clase Main.
