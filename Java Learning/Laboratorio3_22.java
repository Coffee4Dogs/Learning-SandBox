
package laboratorio3_22;


public class Laboratorio3_22 {

    public static void main(String[] args) {
        
        
         //----Declarar Variables----
        
        String linea = "==============================================================================================";
        String codProd1, codProd2, codProd3, codProd4, codProd5;
        String codProd[] = {"P00", "P01", "P02", "P03", "P04", "P05"};
        String nomProd[] = {"pp", "Queso","Papas","Margarina", "Huevos","Chile(4 OZ)"};
        int cant[] = {0, 3, 2, 1, 2, 3};
        double precio[] = {0, 47.50, 8.45, 9.30, 45.00, 7.20};
        boolean grab[] = {false, false, false, true, false, true};
        double subTot[] = new double[20];
        double imp[] = new double[20];
        double tot[] = new double[20];
        double tp;
   
        
        //*****Processo*****
        
        tp = 0;
        
        for(int k = 1; k<=5; k++){
            subTot[k] = precio[k]*cant[k];
            if(grab[k]) imp[k] = subTot[k]*0.15; else imp[k] = 0;
            tot[k] = subTot[k] + imp[k];
            tp = tp + tot[k];
        }
        
        
        
        
        //*****Salida*****
        System.out.println("CODPROD  PRODUCTO       CANTIDAD       PRECIO     GRAB        SUBTOTAL    IMPUESTO     TOTAL");
        System.out.println(linea);
        
        
        
        
        String f1, f2, f3, f4, f5, f6, f7, f8, f;
        f1= "%-9s"; f2 = "%-18s"; f3= "%-13d"; f4= "%-10.2f";  f5 = "%-12b";
        f6 = "%-12.2f"; f7 = "%-12.2f"; f8 = "%-12.2f";
        f = f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8 + "\n";
        
        
        for(int k = 1; k<=5; k++){
        System.out.format(f, codProd[k], nomProd[k],cant[k], precio[k], grab[k], subTot[k], imp[k], tot[k]);
        }
        
        
        System.out.println(linea);
        System.out.format("Total a pagar: \t\t\t\t\t\t\t\t\t\t"+ f8, tp);
        
        
        
        
        
    }//Fin del metodo Main
    
}//Fin de la Clase Main
