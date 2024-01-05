// Polimorfismo por Sobreescritura

package polimorfxsobreescritura;


public class PolimorfXSobreEscritura {

    public static void main(String[] args) {
        
        Circulo Plato = new Circulo();
        Plato.Radio = 15.00;
        Plato.CalcularArea();
        Plato.CalcularPerimetro();
        System.out.println("Area es igual a "+ Plato.Area);
        System.out.println("Perimetro es igual a "+ Plato.Perimetro);
        
        
        
    }//Fin del metodo main.
    
}//Fin de la clase main.
