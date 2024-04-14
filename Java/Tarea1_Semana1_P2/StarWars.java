
package com.mycompany.starwars;


public class StarWars {

    public static Peliculas ID1 = new Peliculas();
    public static Peliculas ID2 = new Peliculas();
    public static Peliculas ID3 = new Peliculas();
    public static Peliculas ID4 = new Peliculas();
    public static Peliculas ID5 = new Peliculas();
    public static Peliculas ID6 = new Peliculas();
    public static Peliculas ID7 = new Peliculas();
    public static Peliculas ID8 = new Peliculas();
    public static Peliculas ID9 = new Peliculas();
    public static Peliculas ID10 = new Peliculas();
    public static Peliculas ID11 = new Peliculas();

    
    public static void Datos(){
        ID1.GuardaRegistro("Star Wars: Episodio I - La Amenaza Fantasma", "George Lucas", 1999, 136, false, 6.5);
        ID2.GuardaRegistro("Star Wars: Episodio II - El Ataque de los Clones", "George Lucas", 2002, 142, true, 7.5);
        ID3.GuardaRegistro("Star Wars: Episodio III - La Venganza de los Sith", "George Lucas", 2005, 146, true, 7.8);
        ID4.GuardaRegistro("Star Wars: Episodio IV - Una nueva esperanza", "George Lucas", 1997, 125, true, 8.6);
        ID5.GuardaRegistro("Star Wars: Episodio V - El Imperio Contraataca", "George Lucas", 1980, 127, true, 8.7);
        ID6.GuardaRegistro("Star Wars: Episodio VI - El Retorno del Jedi", "George Lucas", 1983, 136, true, 8.3);
        ID7.GuardaRegistro("Star Wars: Episodio VII - El Despertar de la Fuerza", "J.J. Abrams", 2015, 135, false, 7.8);
        ID8.GuardaRegistro("Star Wars: Episodio VIII - Los Últimos Jedi", "Rian Johnson", 2017, 152, false, 7.8);
        ID9.GuardaRegistro("Star Wars: Episodio IX - El Ascenso de Skywalker", "J.J. Abrams.", 2019, 135, false, 7.8);
        ID10.GuardaRegistro("Rogue One: Una Historia de Star Wars", "Gareth Edwards.", 2016, 134, false, 7.8);
        ID11.GuardaRegistro("Han Solo: Una Historia de Star Wars", "Ron Howard.", 2018, 135, true, 6.9);
    }//Fin del metodo Datos
    
    
    public static void PrimeraTrilogia(){
    //Imprime la 1ra trilogia
        ID1.ImprimirRegistro();
        ID2.ImprimirRegistro();
        ID3.ImprimirRegistro();
    }
    
    public static void SegundaTrilogia(){
    //Imprime la 2da trilogia
        ID4.ImprimirRegistro();
        ID5.ImprimirRegistro();
        ID6.ImprimirRegistro();
    }
    
    public static void TerceraTrilogia(){
    //Imprime la 3ra trilogia
        ID7.ImprimirRegistro();
        ID8.ImprimirRegistro();
        ID9.ImprimirRegistro();
    }
    
    public static void OtrasPeliculas(){
    //Imprime las Otras Peliculas
        
        ID10.ImprimirRegistro();
        ID11.ImprimirRegistro();
    
    }
    
    public static void ImprimeTabla(){
    
        System.out.println("\n2da TRILOGIA \n");
        SegundaTrilogia();
        System.out.println("\n1era TRILOGIA \n");
        PrimeraTrilogia();
        System.out.println("\n3ra TRILOGIA \n");
        TerceraTrilogia();
        System.out.println("\nOTRAS PELICULAS\n");
        OtrasPeliculas();
    }
    
    public static void main(String[] args) {
        System.out.println("---------------------------------------------------------------------------------------------------");
        System.out.println(" \t\t\t\t\t\t Peliculas de Star Wars");
        System.out.println("---------------------------------------------------------------------------------------------------");
        Datos();
        System.out.println("NOMBRE DE LA PELICULA \t\t\t\t\t\t\t DIRECTOR \t AÑO \t DURACION \t ME GUSTO \t PUNTUACION EN INTERNET");
        
        ImprimeTabla();
        
        
        
        
        
    }//Fin de la clase main.
}//Fin de la clase main.
