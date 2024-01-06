import javax.print.DocFlavor.STRING;

public class Carros {
    String Codigo;
    String Marca;
    String Color;
    int Año;
    double Costo;
    boolean Garantia;

    // Constructor
    public Carros() {
        Codigo = "Cod";
        Marca = "Mar";
        Color = "Col";
        Año = 0;
        Costo = 0.0;
        Garantia = false;
    }

    // Agregar Datos
    void AgregarDatos(String Cod, String Mar, String Col, int A, double Cos, boolean Gar) {
        Codigo = Cod;
        Marca = Mar;
        Color = Col;
        Año = A;
        Costo = Cos;
        Garantia = Gar;
    }

    void Imprimir() {

        String f, f1, f2, f3, f4, f5, f6;
        f1 = "%10s";
        f2 = "%10s";
        f3 = "%10s";
        f4 = "%12d";
        f5 = "%12.2f";
        f6 = "%12b";
        f = f1 + f2 + f3 + f4 + f5 + f6 + "\n";

        System.out.format(f, Codigo, Marca, Color, Año,
                Costo, Garantia);
    }

}
