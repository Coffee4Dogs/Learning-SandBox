
package tablaproductos865;


public class TablaProductos865 {
        public static Producto P1 = new Producto();
        public static Producto P2 = new Producto();
        public static Producto P3 = new Producto();
        public static Producto P4 = new Producto();
        public static Producto P5 = new Producto();
        
        
        
    public static void Datos(){
        P1.GuardaRegistro("P01", "Queso", 3, 47.50, false);
        P2.GuardaRegistro("P02", "PAPAS", 2, 8.45, false);
        P3.GuardaRegistro("P03", "MARGARINA", 1, 9.30, true);
        P4.GuardaRegistro("P04", "HUEVOS", 2, 45.00, false);
        P5.GuardaRegistro("P05", "CHILE(4 OZ)", 3, 7.20, true);
    }
    
 
    public static void ImprimeTabla(){
        System.out.println("CODPROD"+ "\t" +"PRODUCTO"+ "\t" +"CANT"+ "\t\t" +"PRECIO"+ "\t"  +"GRAV" + "\t" + "SubTotal"+ "\t" + "Imp"+ "\t" + "Total");
        P1.ImprimeRegistro();
        P2.ImprimeRegistro();
        P3.ImprimeRegistro();
        P4.ImprimeRegistro();
        P5.ImprimeRegistro();

    }    
    
    
    public static void Calculos(){
        P1.Calcular();
        P2.Calcular();
        P3.Calcular();
        P4.Calcular();
        P5.Calcular();
    }//Fin del metodo Calculos.
    
    
    
    public static void main(String[] args) {
        //P1 es el objeto.
        System.out.println("Tabla Productos B");
        
        
        Datos();
        Calculos();
        ImprimeTabla();
        
        
    }//Fin del metodo.
    
}// Fin de la clase Principal (tablaproductos865).
