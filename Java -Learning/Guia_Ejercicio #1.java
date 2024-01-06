
public class main {

    public static void main(String[] args) {

        /* 
         * 1. Dada una cantidad de dinero cualquiera, haga un programa
         * que imprima cuantos billetes de cada denominación se necesitan
         * para formar dicha cantidad.
         */

        int cuenta = 2023; // << Ingrese la cantidad de dinero cualquiera.
        // (Usare una var int porque se esta pidiendo billetes de cada denominacion y no
        // el restante en monedas).

        int[] billetes_denominacion = { 1, 2, 5, 10, 20, 50, 100, 200, 500 }; // Los billetes que existen en Honduras.
        // index/indice.................0..1..2...3...4...5...6....7....8
        int[] billetes_tengo = { 0, 0, 0, 0, 0, 0, 0, 0, 0 }; // Los billetes que tengo. Aumenta su valor con un
                                                              // bucle de mayor a menor.
        // index/indice..........0..1..2..3..4..5..6..7..8

        /*
         * for (k = 1; k <= cuenta; k++) {
         * System.out.println("hola" + k);
         * 
         * }
         */

        System.out.println("Cuenta inicial: " + cuenta);

        for (int k8 = 1; k8 <= cuenta; k8++) {
            if (cuenta >= billetes_denominacion[8]) {
                billetes_tengo[8] = billetes_tengo[8] + 1;
                cuenta = cuenta - billetes_denominacion[8]; // 500 Lempiras - Index 8
            }

        }
        System.out.println("Billetes de 500: \t | \t" + billetes_tengo[8]);

        for (int k7 = 1; k7 <= cuenta; k7++) {
            if (cuenta >= billetes_denominacion[7]) {
                billetes_tengo[7] = billetes_tengo[7] + 1;
                cuenta = cuenta - billetes_denominacion[7]; // 200 Lempiras - Index 7
            }
        }
        System.out.println("Billetes de 200: \t | \t" + billetes_tengo[7]);

        for (int k6 = 1; k6 <= cuenta; k6++) {
            if (cuenta >= billetes_denominacion[6]) {
                billetes_tengo[6] = billetes_tengo[6] + 1;
                cuenta = cuenta - billetes_denominacion[6]; // 100 Lempiras - Index 6
            }
        }
        System.out.println("Billetes de 100: \t | \t" + billetes_tengo[6]);

        for (int k5 = 1; k5 <= cuenta; k5++) {
            if (cuenta >= billetes_denominacion[5]) {
                billetes_tengo[5] = billetes_tengo[5] + 1;
                cuenta = cuenta - billetes_denominacion[5]; // 50 Lempiras - Index 5
            }
        }
        System.out.println("Billetes de  50: \t | \t" + billetes_tengo[5]);

        for (int k4 = 1; k4 <= cuenta; k4++) {
            if (cuenta >= billetes_denominacion[4]) {
                billetes_tengo[4] = billetes_tengo[4] + 1;
                cuenta = cuenta - billetes_denominacion[4]; // 20 Lempiras - Index 4

            }
        }
        System.out.println("Billetes de  20: \t | \t" + billetes_tengo[4]);

        for (int k3 = 1; k3 <= cuenta; k3++) {
            if (cuenta >= billetes_denominacion[3]) {
                billetes_tengo[3] = billetes_tengo[3] + 1;
                cuenta = cuenta - billetes_denominacion[3]; // 10 Lempiras - Index 3
            }
        }
        System.out.println("Billetes de  10: \t | \t" + billetes_tengo[3]);

        for (int k2 = 1; k2 <= cuenta; k2++) {
            if (cuenta >= billetes_denominacion[2]) {
                billetes_tengo[2] = billetes_tengo[2] + 1;
                cuenta = cuenta - billetes_denominacion[2]; // 5 Lempiras - Index 2
            }
        }
        System.out.println("Billetes de   5: \t | \t" + billetes_tengo[2]);

        for (int k1 = 1; k1 <= cuenta; k1++) {
            if (cuenta >= billetes_denominacion[1]) {
                billetes_tengo[1] = billetes_tengo[1] + 1;
                cuenta = cuenta - billetes_denominacion[1]; // 2 Lempiras - Index 1

            }
        }
        System.out.println("Billetes de   2: \t | \t" + billetes_tengo[1]);

        for (int k0 = 1; k0 <= cuenta; k0++) {
            if (cuenta >= billetes_denominacion[0]) {
                billetes_tengo[0] = billetes_tengo[0] + 1;
                cuenta = cuenta - billetes_denominacion[0]; // 1 Lempira - Index 0
            }
        }
        System.out.println("Billetes de   1: \t | \t" + billetes_tengo[0]);

    }// fin del metodo main
}// fin de la clase main
