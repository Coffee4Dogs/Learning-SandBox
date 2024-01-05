
package polimorfismo865;


public class Articulo {
    
    public double Precio;
    
    
    //Constructor
    public Articulo(){
        Precio = 0.0;

    }
    
    
    //Set Precio
    void SetPrecio(){
        Precio = 3.50;
    }
    
    //Set Precio
    void SetPrecio(double NuevoPrecio){
        Precio = NuevoPrecio;
    }
    
    
    
    //Set Precio
    void SetPrecio(double Costo, double PorcentajeDeGanancia){
        Precio = Costo + Costo*PorcentajeDeGanancia;
    }
    
    //Set Precio
    void SetPrecio(double Costo, int PorcentajeDeGanancia){
        Precio = Costo + Costo*PorcentajeDeGanancia;
    }
    

    
}//Fin de la clase Articulo
