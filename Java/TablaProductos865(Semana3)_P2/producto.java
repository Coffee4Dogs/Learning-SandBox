
package tablaproductos865;


public class Producto {
// Menu
    // CODPROD | PRODUCTO | CANTIDAD | PRECIO | GRAV
    
//Variables:
    // CodProd, NomProd, Cantidad, Precio y Grab
    String CodProd; 
    String NomProd;
    int Cantidad;
    double Precio;
    boolean Grab;
    
    
    double SubTot;
    double Imp;
    double Total;
    
    
    public Producto(){
        /*Un constructor sirve para inicializar el objeto y establecer sus 
        * propiedades y valores predeterminados. Tiene el mismo nombre que 
        * la clase y no cuenta con ningún valor de retorno, ya que su función 
        * principal es inicializar el objeto y no devolver ningún valor.
        */

        CodProd = "cc";
        NomProd= "pp";
        Cantidad = 0;
        Precio = 0.0;
        Grab = false;
        
        
        SubTot = 0;
        Imp = 0;
        Total = 0;
        
        
        
    }//Fin del constructor
    
    
    void GuardaRegistro(String cp, String np, int c, double p, boolean g){
        CodProd = cp;
        NomProd= np;
        Cantidad = c;
        Precio = p;
        Grab = g;
    }//Fin del Metodo GuardaRegisto
    
    
    void ImprimeRegistro(){
        
        String f1, f2, f3, f4, f5, f6 , f7, f8, f;
        
        f1 = "%-8s"; f2 = "%-17s"; f3 = "%-15d"; f4 = "%-8.2f"; f5 = "%-10b"; 
        f6 = "%-10.2f"; f7 = "%-10.2f"; f8 = "%-10.2f";
        f = f1+f2+f3+f4+f5+f6+f7+f8+"\n";
        
        
        System.out.format(f,CodProd ,NomProd, Cantidad ,Precio, Grab, SubTot, Imp, Total );
    
    }//Fin del Metodo ImprimeRegistro
    
    void Calcular(){
    
    SubTot = Precio*Cantidad;
    if (Grab)
    Imp = SubTot * 0.15;
    else Imp = 0;
    Total = SubTot + Imp;
    
    
    }
    
    
    
    
    
}//fin de la clase producto.
