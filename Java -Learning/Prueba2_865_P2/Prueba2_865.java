
package prueba2_865;


public class NodoProducto {
    String Codprod;
    String NomProd;
    int Cantidad;
    double Precio;
    boolean Grab;
    
    NodoProducto Sig;
    NodoProducto Ant;
    
    //Constructor
    public NodoProducto(){
        Codprod = "cp";
        NomProd = "pp";
        Cantidad = 0;
        Precio = 0.0;
        Grab = false;
        
        Sig = null;
        Ant = null;
    }
    
    //Guarda Registro
    public void GuardaRegistro(String cp, String np, int c, double p, boolean g){
        Codprod = cp;
        NomProd = np;
        Cantidad = c;
        Precio = p;
        Grab = g;
    }
    
    //Conectar
    public void Conectar(NodoProducto z){
        Sig = z;
        z.Ant = this;
    }
    
    //Imprime Registro
    public void ImprimeRegistro(){
        String f1,f2,f3,f4,f5,f6,f7,f8,f;
        f1="%-7s"; f2="%-15s"; f3="%-5d"; f4="%-7.2f"; f5="%-7b"; 
        f = f1 + f2 + f3 + f4 + f5 + "\n";
        System.out.format(f,Codprod,NomProd,Cantidad,Precio,Grab);
    }
    
}

