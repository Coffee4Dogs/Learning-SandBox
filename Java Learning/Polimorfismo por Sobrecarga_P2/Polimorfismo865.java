
//Tema:Polimorfismo
        //Poli: Muchos //Morph: Formas
//Que una funcion pueda hacer muchas cosas.
package polimorfismo865;


public class Polimorfismo865 {

    
    public static void main(String[] args) {
        
        //Articulo es la clase | Lapiz el objeto
        Articulo Lapiz = new Articulo();
        
        Lapiz.SetPrecio(10);
        
        System.out.println("Precio del lapiz: "+ Lapiz.Precio);
        
        
    }//Fin del metodo main
    
}//Fin de la clase main
