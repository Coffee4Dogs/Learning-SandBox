
package himnometodos;


public class HimnoMetodos {

    public static void main(String[] args) {
        
        
        //int x[] = new int[5];
        int x[] = {3, 7, 5, 4, 7};
        //         0  1  2  3  4
        
        int n = x.length;//tamaño del arreglo.
        
        System.out.println("Tamaño del arreglo " +n);
        
        int s;
                
        for(int k=0; k<=n-1; k++)
        System.out.println(x[k]);
        
        
        //sumar todos los numeros
        s = 0;
        /*
        s = s + x[0];
        s = s + x[1];
        s = s + x[2];
        s = s + x[3];
        s = s + x[4];
        */
        
       
        
        for(int l=0; l<=4; l++)
        s = s + x[l];
        
       
        System.out.println("Suma = "+s);
        
    } //Fin del metodo main

}//fin de la clase main
