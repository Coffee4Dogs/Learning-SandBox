
package herencia865;


public class Herencia865 {

    public static void line(){
        System.out.println("********************************");
    }
    
    public static void main(String[] args) {
        
        Abuelo A = new Abuelo();
        Padre P = new Padre();
        Hijo H = new Hijo();
        
        
        
        
        //Datos del Abuelo
            System.out.println("Datos del abuelo: ");
            A.Apellido = "De la Roca";
            A.Edad = 80;
            System.out.println("Apellido: "+ A.Apellido);
            System.out.println("Edad: "+ A.Edad);
            A.CuentaHistoria();
            line();
        
        //Datos del Papa
            System.out.println("Datos del padre: ");
            P.Nombre="Oscar";
            P.Apellido = "De la Roca";
            P.Edad = 45;
            P.Profesion="Medico";        
            System.out.println("Nombre: "+ P.Nombre);
            System.out.println("Apellido: "+ P.Apellido);
            System.out.println("Edad: "+ P.Edad);
            System.out.println("Profesion: "+ P.Profesion);
            P.Canta();
            P.CuentaHistoria();
            line();
            
            
        //Datos del Hijo
            System.out.println("Datos del Hijo ");
            H.Nombre="Jhony";
            H.Apellido = "De la Roca";
            H.Edad = 25;
            H.Profesion="Ingeniero";   
            H.Altura = 1.90;
            System.out.println("Nombre: "+ H.Nombre);
            System.out.println("Apellido: "+ H.Apellido);
            System.out.println("Edad: "+ H.Edad);
            System.out.println("Profesion: "+ H.Profesion);
            H.Canta();
            H.CuentaHistoria();
            H.TocaGuitara();
            line();
        
        
    }//Fin del metodo main
    
}//Fin de la Clase main
