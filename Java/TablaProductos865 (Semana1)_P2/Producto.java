
package com.mycompany.tablaproductos865;


public class Producto {
    // Menu
    // CODPROD | PRODUCTO | CANTIDAD | PRECIO | GRAV

    // Variables:
    // CodProd, NomProd, Cantidad, Precio y Grab
    String CodProd;
    String NomProd;
    int Cantidad;
    double Precio;
    boolean Grab;

    public Producto() {
        /*
         * Un constructor sirve para inicializar el objeto y establecer sus
         * propiedades y valores predeterminados. Tiene el mismo nombre que
         * la clase y no cuenta con ningún valor de retorno, ya que su función
         * principal es inicializar el objeto y no devolver ningún valor.
         */

        CodProd = "cc";
        NomProd = "pp";
        Cantidad = 0;
        Precio = 0.0;
        Grab = false;

    }// Fin del constructor

    void GuardaRegistro(String cp, String np, int c, double p, boolean g) {
        CodProd = cp;
        NomProd = np;
        Cantidad = c;
        Precio = p;
        Grab = g;
    }// Fin del Metodo GuardaRegisto

    void ImprimeRegistro() {

        String f1, f2, f3, f4, f5, f;

        f1 = "%-8s";
        f2 = "%-17s";
        f3 = "%-15d";
        f4 = "%-8.2f";
        f5 = "%-10b";
        f = f1 + f2 + f3 + f4 + f5 + "\n";

        // System.out.println(CodProd + "\t" + NomProd + "\t" + Cantidad + "\t" + Precio
        // + "\t" + Grab);
        System.out.format(f, CodProd, NomProd, Cantidad, Precio, Grab);

    }// Fin del Metodo ImprimeRegistro

}// fin de la clase producto.