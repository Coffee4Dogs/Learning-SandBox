
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
    }//Fin del GuardaRegistro
    
    public void Conectar(NodoProducto z){
        Sig = z;
        z.Ant = this;
    }
    
}
