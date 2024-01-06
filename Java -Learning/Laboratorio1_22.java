
package laboratorio1_22;


public class Laboratorio1_22 {

  
    public static void main(String[] args) {
        //----Declarar Variables----
        
        String codProd1, codProd2, codProd3, codProd4, codProd5;
        String nomProd1, nomProd2, nomProd3, nomProd4, nomProd5;
        
        int cant1, cant2, cant3, cant4, cant5;
        
        double precio1, precio2, precio3, precio4, precio5;
        
        boolean grab1, grab2, grab3, grab4, grab5;
        
        //----Entrada de Datos----
        codProd1 = "P01";       nomProd1 = "Queso";             cant1 = 3;      precio1 = 47.50;    grab1 = false;
        codProd2 = "P02";       nomProd2 = "Papas";             cant2 = 2;      precio2 = 8.45;     grab2 = false;
        codProd3 = "P03";       nomProd3 = "Margarina";         cant3 = 1;      precio3 = 9.30;     grab3 = true;
        codProd4 = "P04";       nomProd4 = "Huevos";            cant4 = 2;      precio4 = 45.00;    grab4 = false;
        codProd5 = "P05";       nomProd5 = "Chile(4 OZ)";       cant5 = 3;      precio5 = 7.20;     grab5 = true;
        
        //Processo
        
        //Salida
        System.out.println("CODPROD PRODUCTO        PRECIO  GRAB");
        System.out.println("===========================================");
        System.out.println(codProd1 + "\t" + nomProd1 + "\t" + cant1 + "\t" + precio1 + "\t" + grab1);
        System.out.println(codProd2 + "\t" + nomProd2 + "\t" + cant2 + "\t" + precio2 + "\t" + grab2);
        System.out.println(codProd3 + "\t" + nomProd3 + "\t" + cant3 + "\t" + precio3 + "\t" + grab3);
        System.out.println(codProd4 + "\t" + nomProd4 + "\t" + cant4 + "\t" + precio4 + "\t" + grab4);
        System.out.println(codProd5 + "\t" + nomProd5 + "\t" + cant5 + "\t" + precio5 + "\t" + grab5);
        System.out.println("===========================================");
        
    }//Fin del metodo main.
    
}//Fin de la clase.
