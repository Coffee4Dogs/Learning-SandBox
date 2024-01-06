
package manejodeerrores865;


public class ManejoDeErrores865 {

    
    public static void prueba(){
        
            int A[] = {90, 34, 12, 55, 91};          
            int a = 15; int b =0; int c= a/b;
            System.out.println("C = " +c);
            System.out.println("C = "+A[5]);
    
    
    }
    
    public static void main(String[] args) {
        
        //todo try tiene que tener un catch
        try{
            prueba();
            
        }
        
        //Catch atrapa los errores que identifico try
            catch(ArithmeticException e){
                System.out.println("Error Message: su programa dividio entre cero!");
                System.out.println("Error type: "+ e);
            }
        
            catch (ArrayIndexOutOfBoundsException e){
                System.out.println("Error Message: C es mayor a 5");
                System.out.println("Error type: "+ e);
            }
        
        finally{
            System.out.println("Gracias por entrar al sistema");
        }
        
        
        
    }//Fin del metodo main.
    
}//Fin de la clase main.
