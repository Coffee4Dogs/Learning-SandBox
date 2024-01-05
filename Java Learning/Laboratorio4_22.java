/**
 * Laboratorio4_22
 */
public class Laboratorio4_22 {

    public static int And(int x, int y) {

        int z;
        z = x * y;
        return z;
    }// fin del retorno And

    public static int Or(int x, int y) {

        int z;
        z = x + y;

        if (x > 0) {
            z = 1;
        }

        return z;
    }// fin del retorno And

    public static int Not(int x) {

        int z = 0;

        if (x == 0) {
            z = 1;
        }
        return z;

    }// fin del retorno Not

    public static int Circuito1(int w, int x, int y, int z) {
        int s1, s2, s3;
        s1 = And(w, x);
        s2 = And(y, z);
        s3 = Or(s1, s2);

        return s3;
    }

    public static int Circuito2(int w, int x, int y, int z) {
        int s1, s2, s3, s4, s5, s6;

        s1 = Not(x);
        s2 = Not(y);
        s3 = Not(z);
        s4 = And(s1, w);
        s5 = And(s2, s3);
        s6 = Or(s4, s5);
        return s6;
    }

    public static int Circuito3(int w, int x, int y, int z) {
        int s1, s2, s3, s4, s5, s6;

        s1 = Not(w);
        s2 = Not(x);
        s3 = Not(y);
        s4 = And(s2, s1);
        s5 = And(z, s3);
        s6 = Or(s4, s5);

        return s6;
    }

    public static int Circuito4(int w, int x, int y, int z) {
        int s1, s2, s3, s4, s5;

        s1 = Not(w);
        s2 = Not(z);
        s3 = And(x, s1);
        s4 = And(s2, y);
        s5 = Or(s4, s3);
        return s5;
    }

    public static void main(String[] args) {
        // System.out.println(And(1, 1));
        // System.out.println(Or(1, 1));
        // System.out.println(Not(0));

        // Probar circuitos.
        // System.out.println("Circuito1, -> \t" + Circuito1(1, 1, 0, 0));
        // System.out.println("Circuito2, -> \t" + Circuito2(1, 0, 1, 0));
        // System.out.println("Circuito3, -> \t" + Circuito3(0, 0, 1, 1));
        // System.out.println("Circuito4, -> \t" + Circuito4(0, 1, 0, 0));

        // Tablas de verdad
        int c = -1;

        // Tabla de verdad circuito 1
        System.out.println("Circuito 1");
        System.out.println("Dec" + "\t" + "w" + "\t" + "x" + "\t" + "y" + "\t" + "z" + "\t" + "Res");
        for (int w = 0; w <= 1; w++)
            for (int x = 0; x <= 1; x++)
                for (int y = 0; y <= 1; y++)
                    for (int z = 0; z <= 1; z++) {
                        c = c + 1;
                        System.out
                                .println(c + "\t" + w + "\t" + x + "\t" + y + "\t" + z + "\t" + Circuito1(w, x, y, z));
                    }

        // Tabla de verdad circuito 2
        System.out.println("Circuito 2");
        System.out.println("Dec" + "\t" + "w" + "\t" + "x" + "\t" + "y" + "\t" + "z" + "\t" + "Res");
        for (int w = 0; w <= 1; w++)
            for (int x = 0; x <= 1; x++)
                for (int y = 0; y <= 1; y++)
                    for (int z = 0; z <= 1; z++) {
                        c = c + 1;
                        System.out
                                .println(c + "\t" + w + "\t" + x + "\t" + y + "\t" + z + "\t" + Circuito2(w, x, y, z));
                    }

        // Tabla de verdad circuito 3
        System.out.println("Circuito 3");
        System.out.println("Dec" + "\t" + "w" + "\t" + "x" + "\t" + "y" + "\t" + "z" + "\t" + "Res");
        for (int w = 0; w <= 1; w++)
            for (int x = 0; x <= 1; x++)
                for (int y = 0; y <= 1; y++)
                    for (int z = 0; z <= 1; z++) {
                        c = c + 1;
                        System.out
                                .println(c + "\t" + w + "\t" + x + "\t" + y + "\t" + z + "\t" + Circuito3(w, x, y, z));
                    }

        // Tabla de verdad circuito 4
        System.out.println("Circuito 4");
        System.out.println("Dec" + "\t" + "w" + "\t" + "x" + "\t" + "y" + "\t" + "z" + "\t" + "Res");
        for (int w = 0; w <= 1; w++)
            for (int x = 0; x <= 1; x++)
                for (int y = 0; y <= 1; y++)
                    for (int z = 0; z <= 1; z++) {
                        c = c + 1;
                        System.out
                                .println(c + "\t" + w + "\t" + x + "\t" + y + "\t" + z + "\t" + Circuito4(w, x, y, z));
                    }

    }// Fin del metodo main
}// Fin de la clase main.
