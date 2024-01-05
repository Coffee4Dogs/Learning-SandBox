
package archivosbinarios865;
import java.io.*;


public class ArchivosBinarios865 {
    
    public static Empleado E[] = new Empleado[20];
    public static int NR = 0;//Numero de registros que tenemos
    public static String ruta = "C:/Tienda/Empleados.Dat";
    
    
    //Inicializa las variables.
    public static void Inicializa(){
        for(int k = 0; k <= 19; k ++){
            E[k] = new Empleado();
        }
    }//Fin del metodo inicializa
    
    //Donde almacenamos los datos.
    public static void Datos(){
        E[1].GuardaRegistro("E01", "Juan", 22, 12000.00);
        E[2].GuardaRegistro("E02", "Roberto", 32, 9000.00);
        E[3].GuardaRegistro("E03", "Lucia", 27, 14000.00);
        E[4].GuardaRegistro("E04", "Dania", 25, 11000.00);
        E[5].GuardaRegistro("E05", "Glenda", 23, 15000.00);
        NR = 5;
    
    }//Fin del metodo Datos
    
    //Imprime la Tabla
    public static void ImprimeTabla(){
        System.out.println("Cod    Nombre        Edad         Suel");
        System.out.println("================================================");
            for(int k = 1; k <= NR; k++){
                E[k].ImprimeRegistro();
            }
        System.out.println("================================================");
    }//Fin del metodo ImprimeTabla
    
    
    public static void Escritura(){
        FileOutputStream fos=null;
        DataOutputStream dos=null;
        
        try{
            fos = new FileOutputStream("C:/Tienda/Empleados.Dat");
            dos = new DataOutputStream(fos);
            for(int k = 1; k <= NR; k++){
                dos.writeUTF(E[k].Codigo);
                dos.writeUTF(E[k].NomEmp);
                dos.writeInt(E[k].Edad);
                dos.writeDouble(E[k].Sueldo);
            }
        dos.close();
        }
        catch(IOException e){
            System.out.println("Error de escritura");        
        }
 
    }//Fin del metodo Escritura
    
    
    public static void Lectura(){
        FileInputStream fis=null;
        DataInputStream Entrada=null;
        int k=0;
        try{
            fis = new FileInputStream("C:/Tienda/Empleados.Dat");
            Entrada = new DataInputStream(fis);
            
            while(Entrada.available() > 0){
                k = k + 1;
                E[k].Codigo = Entrada.readUTF();
                E[k].NomEmp = Entrada.readUTF();
                E[k].Edad = Entrada.readInt();
                E[k].Sueldo = Entrada.readDouble();
            }
            Entrada.close();
            NR=k;
        }
        
        
        catch(IOException e){
            System.out.println("Error de Lectura...");
        }
        
        
    
    
    }//Fin del metodo Lectura
    
    
    
    
    
    
    public static void main(String[] args) {
        
        Inicializa();
        //Datos();
        //ImprimeTabla();
        //Escritura();
        Lectura();
        ImprimeTabla();
        
        
        
        
        
        System.out.println("Fin del programa...");
    }//Fin del metodo main.
    
}//Fin de la clase main.
