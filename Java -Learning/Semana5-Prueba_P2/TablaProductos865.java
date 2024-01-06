
package com.mycompany.tablaproductos865;

import java.io.*;

public class TablaProductos865 {

    public static Producto P[] = new Producto[20];

    public static double Tpagar;
    public static int NR = 0;

    public static void Inicializa() {
        for (int k = 0; k <= 19; k++) {
            P[k] = new Producto();
        }

    }// Fin del metodo Inicializa

    public static void Datos() {
        P[1].GuardaRegistro("P01", "Queso", 3, 47.50, false);
        P[2].GuardaRegistro("P02", "PAPAS", 2, 8.45, false);
        P[3].GuardaRegistro("P03", "MARGARINA", 1, 9.30, true);
        P[4].GuardaRegistro("P04", "HUEVOS", 2, 45.00, false);
        P[5].GuardaRegistro("P05", "CHILE(4 OZ)", 3, 7.20, true);
        NR = 5;
    }

    public static void ImprimeTabla() {
        System.out.println("CODPROD" + "\t" + "PRODUCTO" + "\t" + "CANT" + "\t\t" + "PRECIO" + "\t" + "GRAV" + "\t"
                + "SubTotal" + "\t" + "Imp" + "\t" + "Total");

        for (int k = 1; k <= NR; k++) {
            P[k].ImprimeRegistro();
            // P1.ImprimeRegistro();
        }

    }

    public static void Calcular() {
        Tpagar = 0;
        for (int k = 1; k <= NR; k++) {
            P[k].Calcular();
            // P1.Calcular();
            Tpagar = Tpagar + P[k].Total;
        }

    }// Fin del metodo Calcular.

    // Var: Nombre con su ruta.
    // Var: Abrir el archivo.
    // Var: Escribir en el archivo.
    // Cuando usamos archivos es recomendable usar Try y Catch.
    public static void Escritura() {
        File a = new File("C://TIENDA/PRODUCTOS.txt");
        try {
            FileWriter fw = new FileWriter(a); // Abre el archivo para escritura
            PrintWriter pw = new PrintWriter(fw); // Variable para escribir en el archivo

            for (int k = 1; k <= NR; k++) {
                pw.println(P[k].CodProd);
                pw.println(P[k].NomProd);
                pw.println(P[k].Cantidad);
                pw.println(P[k].Precio);
                pw.println(P[k].Grab);
            }

            fw.close();
        }

        catch (IOException e) {
            System.out.println("Error de escritura.");
        }

    }// Fin del metodo Escritura

    public static void Lectura() {

        try {
            File a = new File("C://TIENDA/PRODUCTOS.txt");
            FileReader fr = new FileReader(a);// Abre el archivo para la lectura
            BufferedReader br = new BufferedReader(fr);
            String Linea;
            int k = 0;
            Linea = br.readLine();

            while (Linea != null) {
                k = k + 1;
                P[k].CodProd = Linea;
                Linea = br.readLine();
                P[k].NomProd = Linea;
                Linea = br.readLine();
                P[k].Cantidad = Integer.valueOf(Linea);
                Linea = br.readLine();
                P[k].Precio = Double.valueOf(Linea);
                Linea = br.readLine();
                P[k].Grab = Boolean.valueOf(Linea);
                Linea = br.readLine();
            } // fin del while

            fr.close();
            NR = k;
        }

        catch (IOException e) {
            System.out.println("Error de lectura.");
        }

    }

    public static void main(String[] args) {
        // P1 es el objeto.
        System.out.println("Tabla Productos B");
        Inicializa();
        Datos();
        Escritura();
        Lectura();
        Calcular();
        ImprimeTabla();
    }// Fin del metodo.

}// Fin de la clase Principal (tablaproductos865).

