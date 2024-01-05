
package calendario22;

public class Calendario22 {

    
    
    public static int Bisiesto (int año){
if (año%100==0){
    if (año %400==0) return 1; else return 0;
    }//Fin del if 100
else if(año%4==0) return 1; else 
    return 0;
     }//Fin del metodo bisiesto 
 //------------------------------------------------------------------------------------
     public static int Diainicioaño(int año){
    int dsia=0;
 
if (año==2001) dsia=1;
if (año==2002) dsia=2;
if (año==2003) dsia=3;
if (año==2004) dsia=4;
if (año==2005) dsia=6;
return  dsia;
     }//Fin del metodo Diainicioaño
//---------------------------------------------------------------------------------
      public static void Imprimemes(int mes, int año){
      
        int dia=0;
        int dsim=2;    //Total de dia inical del mes
        int dsia= Diainicioaño (año);      //Dia inicial del año 
        int cim[]={0,0,3,3,6,1,4,6,2,5,0,3,5}; //codigo inicio de mes
        int tdm []={0,31,28,31,30,31,30,31,31,30,31,30,31}; //Total de dia del mes.
        String nomMes []={"yy","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
        tdm[2] = 28 + Bisiesto (año);
        dsim =dsia + cim[mes];
        if (mes >=3) dsim = dsim + Bisiesto (año);
          System.out.println(nomMes[mes]+"\t"+año);
          System.out.println("==============");
        System.out.println("DO"+"\t"+"LU"+"\t"+"MA"+"\t"+"MI"+"\t"+"JU"+"\t"+"VI"+"\t"+"SA"+"\t");
        System.out.println("...................................................");
        for (int c=1;c<=42;c++){ if (c>dsim  && dia <tdm[mes]){
                   dia = dia + 1;
 System.out.print ( dia +"\t");
 }//Fin del if c
 else
System.out.print(""+"\t");

 if (c%7==0)System.out.println("");
               

 }//Fin del for c     
          
      }//Fin del metodo imprimemes
     
    
    

    public static void main(String[] args) {
       for(int mes = 1; mes<=12; mes++){
           Imprimemes(mes,2005);
       }
        
       
 }//Fin del maim
    
}//Fin de la clase Calendario_22
        
        

