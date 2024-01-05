/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package labjack;

/**
 *
 * @author tguca-L01
 */
public class Labjack {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
         //----Declarar Variables----
        
        String linea = "==============================================================================================";
        String codProd1, codProd2, codProd3, codProd4, codProd5;
        String nomProd1, nomProd2, nomProd3, nomProd4, nomProd5;
        
        int cant1, cant2, cant3, cant4, cant5;
        double precio1, precio2, precio3, precio4, precio5; 
        boolean grab1, grab2, grab3, grab4, grab5;
        double subTot1, subTot2, subTot3, subTot4, subTot5;
        double imp1, imp2, imp3, imp4, imp5;
        double tot1, tot2, tot3, tot4, tot5, tp;
        //*****Entrada de Datos*****
        //      codPrpod                nomProd                    cant           precio              grab  
        //      9                           15                      5               7                   7       
        codProd1 = "P01";       nomProd1 = "Queso";             cant1 = 3;      precio1 = 47.50;    grab1 = false;
        codProd2 = "P02";       nomProd2 = "Papas";             cant2 = 2;      precio2 = 8.45;     grab2 = false;
        codProd3 = "P03";       nomProd3 = "Margarina";         cant3 = 1;      precio3 = 9.30;     grab3 = true;
        codProd4 = "P04";       nomProd4 = "Huevos";            cant4 = 2;      precio4 = 45.00;    grab4 = false;
        codProd5 = "P05";       nomProd5 = "Chile(4 OZ)";       cant5 = 3;      precio5 = 7.20;     grab5 = true;
        
        //*****Processo*****
        subTot1 = precio1*cant1;
        subTot2 = precio2*cant2;
        subTot3 = precio3*cant3;
        subTot4 = precio4*cant4;
        subTot5 = precio5*cant5;
        
        //Impuestos
        //Condicionales
        if(grab1==true)imp1= subTot1*0.15; else imp1 = 0;
        if(grab1==true)imp2= subTot2*0.15; else imp2 = 0;
        if(grab1==true)imp3= subTot3*0.15; else imp3 = 0;
        if(grab1==true)imp4= subTot4*0.15; else imp4 = 0;
        if(grab1==true)imp5= subTot5*0.15; else imp5 = 0;
        
        imp1 = subTot1*0.15;
        imp2 = subTot2*0.15;
        imp3 = subTot3*0.15;
        imp4 = subTot4*0.15;
        imp5 = subTot5*0.15;
        
        //Totales
        tot1 = subTot1 + imp1;
        tot2 = subTot2 + imp2;
        tot3 = subTot3 + imp3;
        tot4 = subTot4 + imp4;
        tot5 = subTot5 + imp5;
        
        tp = tot1 + tot2+ tot3 + tot4 + tot5
        
        //*****Salida*****
        System.out.println("CODPROD  PRODUCTO       CANTIDAD       PRECIO     GRAB        SUBTOTAL    IMPUESTO     TOTAL");
        System.out.println(linea);
        
        //Manera-1
        //System.out.format("%-9s" + "%-15s" + "%-5d"+ "%-7.2f" + "%-7b" + "\n",codProd1, nomProd1,cant1, precio1, grab1, subtotal, imp1);
        /*
        % significa formato
        - significa posicion
        9 significa lo ancho o el espacio que estamos dejando en la tabla.
        */
        
        
        String f1, f2, f3, f4, f5, f6, f7, f8, f;
        f1= "%-9s"; 
        f2 = "%-18s"; 
        f3= "%-13d"; 
        f4= "%-10.2f"; 
        f5 = "%-12b";
        f6 = "%-12.2f";
        f7 = "%-12.2f";
        f8 = "%-12.2f";
        f = f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8 + "\n";
        System.out.format(f, codProd1, nomProd1,cant1, precio1, grab1, subTot1, imp1, tot1);
        System.out.format(f, codProd2, nomProd2,cant2, precio2, grab2, subTot2, imp2, tot2);
        System.out.format(f, codProd3, nomProd3,cant3, precio3, grab3, subTot3, imp3, tot3);
        System.out.format(f, codProd4, nomProd4,cant4, precio4, grab4, subTot4, imp4, tot4);
        System.out.format(f, codProd5, nomProd5,cant5, precio5, grab5, subTot5, imp5, tot5);
        System.out.println(linea);
        System.out.format("Total a pagar: \t\t\t\t\t\t\t\t\t\t"+ f8, tp);
        
            
        
        
    }//fin del metodo main
    
}//fin de la clase main
