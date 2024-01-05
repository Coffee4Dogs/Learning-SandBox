
package matrices22;


public class Matrices22 {

   public static void ImprimeMatriz(int X[][]){
       
       System.out.println("Lun\tMa\tMie\tJue\tVie");
       
       for(int i = 1; i <= 4; i++){
            
                for(int j = 1; j <= 5; j++){
                System.out.print(X[i][j]+"\t"); 
                
            }
            System.out.println("");
        }
   
   
   }//fin del metodo Imprime_Matriz

   
   
   public static int[][] Enero(){
   
   int D[][] = {{0,0,0,0,0,0}, 
                {0,150,170,140,180,190},
                {0,173,184,193,200,210},
                {0,182,205,215,209,217},
                {0,122,189,202,225,219} };
   
   return D;
   
   }// Fin del metodo Enero.
   
   
   public static int[][] Febrero(){
   
   int D[][] = {{0,0,0,0,0,0}, 
                {0,233,195,219,260,293},
                {0,121,190,222,255,214},
                {0,200,239,231,232,216},
                {0,230,208,251,289,227} };
   
   return D;
   
   }// Fin del metodo Febrero.
   
   
   public static int[][] Marzo(){
   
   int D[][] = {{0,0,0,0,0,0}, 
                {0,199,200,204,210,215},
                {0,220,223,230,232,235},
                {0,240,242,244,248,250},
                {0,255,258,260,267,270} };
   
   return D;
   
   }// Fin del metodo Marzo
   
   public static int[][] Suma(int A[][], int B[][], int C[][]){
       int D[][] = new int[5][6];
       
       
       for(int i = 1; i <= 4; i++){
            
                for(int j = 1; j <= 5; j++){
                D[i][j] = A[i][j]+B[i][j]+C[i][j]; 
                
            }
            
        }
       
   
       return D;
   }
   
    public static void main(String[] args) {
       
//        int A[][] = new int [5][6];
//        System.out.println("Matrices");
//        
//        A[1][1] = 150; A[1][2] = 170; A[1][3] = 140; A[1][4] = 180; A[1][5] = 190; //1
//        A[2][1] = 173; A[2][2] = 184; A[2][3] = 193; A[2][4] = 200; A[2][5] = 210; //2
//        A[3][1] = 182; A[3][2] = 205; A[3][3] = 215; A[3][4] = 209; A[3][5] = 217; //3
//        A[4][1] = 122; A[4][2] = 189; A[4][3] = 202; A[4][4] = 225; A[4][5] = 219; //4
        
//        int A[][] = {{0,0,0,0,0,0}, 
//                    {0,150,170,140,180,190},
//                    {0,173,184,193,200,210},
//                    {0,182,205,215,209,217},
//                    {0,122,189,202,225,219} };
      

        //int x = 0;
        //x = A[1].length;
        //System.out.println(x);
        
        
        int A[][] = new int[5][6];
        int B[][] = new int[5][6];
        int C[][] = new int[5][6];
        int T[][] = new int[5][6];
        
        
        
        
        
        
        
        
        A = Enero();
        B = Febrero();
        C = Marzo();
        T = Suma(A,B,C);
        System.out.println("Enero");
        ImprimeMatriz(A);
        System.out.println("Febrero");
        ImprimeMatriz(B);
        System.out.println("Marzo");
        ImprimeMatriz(C);
        System.out.println("-----------------------------");
        System.out.println("La suma de todo es: ");
        ImprimeMatriz(T);
        
        
                
        
        
        
        
        
        
    }//Fin del metodo main.
    
}//Fin de la clase main.
