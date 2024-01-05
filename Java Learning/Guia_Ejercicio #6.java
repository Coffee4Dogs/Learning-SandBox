
package com.mycompany.ejercicio_6;



public class Ejercicio_6 {
    /*
    a)	Los totales por Año (Columna).
    b)	Los totales por mes (Filas).
    c)	Imprima la tabla con sus resultados.

    */
    
    public static void main(String[] args) {
        
        String meses[] = {"Enero","Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
        int y_2011[] = {50, 55, 58, 54, 59, 61, 65, 60, 62, 57, 63, 67}; 
        int y_2012[] = {79, 84, 87, 83, 88, 90, 94, 89, 91, 86, 92, 96};
        int y_2013[] = {92, 96, 98, 93, 97, 98, 101, 95, 96, 90, 95, 98};
        int y_2014[] = {111, 116, 119, 115, 120, 122, 126, 121, 123, 118, 124, 128};
        int y_2015[] = {110, 117, 122, 120, 127, 131, 137, 134, 138, 135, 143, 149};
        int y_2016[] = {128, 132, 134, 129, 133, 134, 137, 131, 132, 126, 131, 134};
        int y_2017[] = {146, 153, 158, 156, 163, 167, 173, 170, 174, 171, 179, 185};
        int totales[] = {0,0,0,0,0,0,0,0,0,0,0,0};
        int total = 0;
        String f1 = "%-15s";
        String f2 = "%-15d";
        String f = f2 + f1 + f2+ f2 + f2 + f2 + f2 + f2 + f2 + f2;
        
        //Categorias
        System.out.format(f1+f1+f1+f1+f1+f1+f1+f1+f1+f1+"%n",
                "NMES", "MES", "2011", "2012", "2013", "2014",
                "2015", "2016", "2017","TOTALES");
        
        //Tabla
        for(int k = 0; k<=11; k++){
            totales[k] = y_2011[k] + y_2012[k] + y_2013[k] + y_2014[k] + y_2015[k] + y_2016[k] + y_2017[k];
            System.out.format(f + "%n",k+1,meses[k],y_2011[k], y_2012[k], y_2013[k], y_2014[k], y_2015[k], y_2016[k], y_2017[k], totales[k]);
            
            
        }
        int t_2011, t_2012, t_2013, t_2014, t_2015, t_2016, t_2017;
        t_2011 = 0; t_2012 = 0; t_2013 = 0; t_2014 = 0; t_2015 = 0; t_2016 = 0; t_2017 = 0;
        
        for(int k = 0; k <= 11; k++){
        t_2011 = y_2011[k] + t_2011;
        t_2012 = y_2012[k] + t_2012;
        t_2013 = y_2013[k] + t_2013;
        t_2014 = y_2014[k] + t_2014;
        t_2015 = y_2015[k] + t_2015;
        t_2016 = y_2016[k] + t_2016;
        t_2017 = y_2017[k] + t_2017;
    
        }
        for(int k = 0; k <= 11; k++){
        total = totales[k] + total;
        }
        
        System.out.format(f1 + f1 + f2+ f2 + f2 + f2 + f2 + f2 + f2 + f2+"%n"," ","Totales",t_2011, t_2012, t_2013, t_2014,t_2015, t_2016, t_2017, total);
       
        
        
    }//Fin del metodo main
}//FIn de la clase main
