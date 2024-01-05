
package archivosbinarios865;


public class Empleado {
    String  Codigo;
    String  NomEmp;
    int     Edad;
    double  Sueldo;
    
    
    //Constructor
    public Empleado(){
        Codigo = "cc";
        NomEmp = "nn";
        Edad   = 0;
        Sueldo = 0;
    
    }//Fin del constructor

    
    //Guarda el registro de los empleados
    public void GuardaRegistro(String c, String n, int e, double s){
        Codigo = c;
        NomEmp = n;
        Edad = e;
        Sueldo = s;
      
    }//Fin del GuardaRegistro
    
    
    //Imprime el registro de los empleados
    public void ImprimeRegistro(){
        String f1, f2, f3, f4, f;
        f1 = "%-5s"; f2= "%-15s"; f3="%-5d"; f4="%-7.2f";
        f = f1 + f2 + f3 + f4 + "\n";
        
        System.out.format(f,Codigo, NomEmp, Edad, Sueldo);
    }//Fin del ImprimeRegistro
    
    
    
    
    
    

    
}//Fin de la clase Empleado
