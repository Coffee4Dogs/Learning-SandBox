
public class main {

    /*
     * Dados el largo y ancho de 5 rectángulos o cuadrados, haga un programa
     * que calcule el área y el perímetro de la figura, luego imprima la tabla.
     * (Área = Largo * Ancho),
     * (Perímetro = 2*Largo + 2*Ancho).
     */
    public static int perimetro(int x, int y) {
        int z;
        z = 2 * x + 2 * y;
        return z;
    }

    public static int area(int x, int y) {
        int z;
        z = x * y;
        return z;
    }

    public static String figura(int x, int y) {
        String z;
        if (x == y) {
            z = "Cuadrado";
        } else {
            z = "Rectangulo";
        }
        return z;
    }

    public static void main(String[] args) {
        String line = "______________________________________________________";
        System.out.println("No." + " \t" + "Largo" + " \t" + "Ancho" + " \t" + "Área" + " \t" + "Perímetro"
                + " \t" + "Figura"); // Categorias
        System.out.println("1" + " \t" + "7" + " \t" + "4" + " \t" + area(7, 4) + " \t" + perimetro(7, 4)
                + " \t \t"
                + figura(7, 4)); // 1
        System.out.println("2" + " \t" + "5" + " \t" + "5" + " \t" + area(2, 5) + " \t" + perimetro(2, 8)
                + " \t \t"
                + figura(5, 5)); // 2
        System.out.println("3" + " \t" + "8" + " \t" + "3" + " \t" + area(3, 8) + " \t" + perimetro(3, 8)
                + " \t \t"
                + figura(8, 3)); // 3
        System.out.println("4" + " \t" + "9" + " \t" + "9" + " \t" + area(4, 9) + " \t" + perimetro(4, 9)
                + " \t \t"
                + figura(9, 9));// 4
        System.out.println("5" + " \t" + "12" + " \t" + "6" + " \t" + area(12, 6) + " \t" + perimetro(12, 6)
                + " \t \t"
                + figura(12, 6)); // 5

    }// fin del metodo main
}// fin de la clase main
