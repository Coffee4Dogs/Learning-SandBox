
package tablaproductos865;


public class TablaProductos865 {
        public static Producto P[] = new Producto[20];
        public static int NR = 0; //numero de registro
        
        
    public static void Inicializa(){
        for(int k = 1; k <= 19; k++){
            P[k] = new Producto();
        }
    }
        
    public static void Datos(){
        P[1].GuardaRegistro("P01", "Queso", 3, 47.50, false);
        P[2].GuardaRegistro("P02", "PAPAS", 2, 8.45, false);
        P[3].GuardaRegistro("P03", "MARGARINA", 1, 9.30, true);
        P[4].GuardaRegistro("P04", "HUEVOS", 2, 45.00, false);
        P[5].GuardaRegistro("P05", "CHILE(4 OZ)", 3, 7.20, true);
        NR = 5;
    }
    
 
    public static void ImprimeTabla(){
        System.out.println("CODPROD"+ "\t" +"PRODUCTO"+ "\t" +"CANT"+ "\t\t" +"PRECIO"+ "\t"  +"GRAV" + "\t" + "SubTotal"+ "\t" + "Imp"+ "\t" + "Total");
        for(int k = 1; k <= NR; k++){
            P[k].ImprimeRegistro();
        }
    }    
    
    
    public static void Calculos(){
        for(int k = 1; k <= NR; k++){
            P[k].Calcular();
        }    
    }//Fin del metodo Calculos.
    
    
    
    public static void main(String[] args) {
        //P1 es el objeto.
        System.out.println("Tabla Productos B");
        
        Inicializa();
        Datos();
        Calculos();
        ImprimeTabla();
        
        
    }//Fin del metodo.
    
}// Fin de la clase Principal (tablaproductos865).
