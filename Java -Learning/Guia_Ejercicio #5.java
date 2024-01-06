public static class Guia_Ejercicio#5
{

    public static void main(String[] args) {
        
        /*
         * 5.  Dada la siguiente tabla de cantidades de productos vendidos durante tres meses. 
         */
        String prod[] = { "X01", "X02", "X03", "X04", "X05" };
        int mes1[] = { 12, 17, 28, 14, 21 };
        int mes2[] = { 13, 15, 14, 18, 17 };
        int mes3[] = { 20, 16, 17, 11, 19 };
        int txp[] = { 0, 0, 0, 0, 0 };

        String f1 = "%-10s";
        String f2 = "%-10d";
        String f3 = "%-10d";
        String f4 = "%-10d";
        String f5 = "%-10d";
        String f = f1 + f2 + f3 + f4 + f5 + "%n";

        System.out.format(f1 + f1 + f1 + f1 + f1 + "%n", "Prod", "MES1", "MES2", "MES3", "TXP");

        int k = 0;
        for (k = 0; k <= 4; k++) {
            txp[k] = mes1[k] + mes2[k] + mes3[k];
            System.out.format(f, prod[k], mes1[k], mes2[k], mes3[k], txp[k]);// La tabla de los X01 hasta X05, los meses
                                                                             // y los TXP.
        }

        int Tum1, Tum2, Tum3, Tpv;
        Tum1 = 0; // Luego en el for, se sumaran con Mes 1, Mes2, Mes3, Mes4, Mes5.
        Tum2 = 0;
        Tum3 = 0;
        Tpv = 0;

        for (k = 0; k <= 4; k++) {
            Tum1 = mes1[k] + Tum1;
            Tum2 = mes2[k] + Tum2;
            Tum3 = mes3[k] + Tum3;
        }

        Tpv = Tum1 + Tum2 + Tum3;// La suma de Tum 1,2 y 3 o sino la suma de TXP.

        System.out.format(f, "TOTAL", Tum1, Tum2, Tum3, Tpv);

        double Prom1, Prom2, Prom3, PT;
        Prom1 = 0;
        Prom2 = 0;
        Prom3 = 0;
        PT = 0;

        int l1, l2, l3;
        l1 = mes1.length;
        l2 = mes2.length;
        l3 = mes3.length;
        Prom1 = Tum1 / l1;
        Prom2 = Tum2 / l2;
        Prom3 = Tum3 / l3;

        PT = Prom1 + Prom2 + Prom3;

        String f6 = "%-10.2f";
        System.out.format(f1 + f6 + f6 + f6 + f6 + "%n", "Prom", Prom1, Prom2, Prom3, PT);

    }// Fin del metodo main.
}// Fin de la clase main.