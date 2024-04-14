
package modificadordeacceso865;


public class ModificadorDeAcceso865 {

   
    public static void main(String[] args) {
        
        Persona P1 = new Persona();
        
        Departamento D1 = new Departamento();
        
        
        //Guardar Datos
            P1.Nombre = "Juan";
            P1.Apellido = "Mendez";

            //Privados
                P1.setEdad(25);
                P1.setAltura(1.78);
            
            
  
        
        //Imprimir Resultado
            System.out.println("Nombre: " + P1.Nombre);
            System.out.println("Apellido: " + P1.Apellido);
            System.out.println("Edad: "+ P1.getEdad());
            System.out.println("Altura: "+ P1.getAltura());
        
        System.out.println("Departamento"+ D1.NomDep);
        
        
    }//Fin del metodo main
    
}//Fin de la clase main.
