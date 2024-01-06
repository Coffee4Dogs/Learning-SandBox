
package modificadordeacceso865;

public class Persona {
    public String Nombre;
    protected String Apellido;
    private int Edad;
    private double Altura;
    
    //Constructor
        public Persona(){
            Nombre = "nn";
            Apellido = "aa";
            Edad = 0;
            Altura=0.0;
        }//Fin del Constructor

    //Privados - Asigna (Guardar Datos)
        public void setEdad(int Edad) {
            this.Edad = Edad;
        }

        public void setAltura(double Altura) {
            this.Altura = Altura;
        }

     
    //Retorna Variables (Imprimir)
        public int getEdad() {
            return Edad;
        }

        public double getAltura() {
            return Altura;
        }

        
        
    
}//Fin de la clase Persona

