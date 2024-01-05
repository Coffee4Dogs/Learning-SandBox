
package com.mycompany.starwars;


public class Peliculas {  
    String NombrePelicula;
    String Director;
    int Año;
    int duracion;
    boolean MeGusto;
    double Puntuacion;
    
    
    Peliculas(){
        NombrePelicula = null;
        Director = null;
        Año = 0;
        duracion = 0;
        MeGusto = false;
        Puntuacion = 0.0;
    }//Fin del Constructor
    
    
    void GuardaRegistro(String NomPel, String Dir, int A, int Dur, boolean MeGus, double Punt){ 
        NombrePelicula = NomPel;
        Director = Dir;
        Año = A;
        duracion = Dur;
        MeGusto = MeGus;
        Puntuacion = Punt;
    }// Fin del metodo GuardaRegistro
    
    
    void ImprimirRegistro(){
        String f1, f2, f3, f4, f5, f6, f; 
        f1 = "%-70s"; f2 = "%-19s"; f3 = "%-10d"; f4 = "%-16d"; f5 = "%-20b"; f6 = "%-14.2f";
        f = f1 + f2 + f3 + f4 + f5 + f6 + "\n";
        System.out.format(f,NombrePelicula,Director, Año, duracion, MeGusto, Puntuacion);
    }// Fin del metodo ImprimeRegistro
    
    
    
    
    
    
}//Fin de la clase Peliculas

