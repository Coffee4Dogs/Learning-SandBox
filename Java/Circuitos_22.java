package circuitos_22;

public class Circuitos_22 {

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

    public static void main(String[] args) {

        // System.out.println(And(1,1));
        // System.out.println(Or(1,1));
        // System.out.println(Not(1));
        System.out.println("Circuito2, Resultado: " + Circuito2(1, 0, 0, 0));

        // Tabla de verdad
        int c = -1;
        System.out.println("Dec" + "\t" + "w" + "\t" + "x" + "\t" + "y" + "\t" + "z" + "\t" + "Res");
        for (int w = 0; w <= 1; w++)
            for (int x = 0; x <= 1; x++)
                for (int y = 0; y <= 1; y++)
                    for (int z = 0; z <= 1; z++) {
                        c = c + 1;
                        System.out
                                .println(c + "\t" + w + "\t" + x + "\t" + y + "\t" + z + "\t" + Circuito2(w, x, y, z));
                    }

    }// fin del metodo main

}// fin de la clase main
