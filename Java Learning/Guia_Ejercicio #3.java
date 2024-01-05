public class main {

        public static void main(String[] args) {

                /* 
                 * 3. Dado el Día y Mes del año cualesquiera (p.ej: Dia=29; Mes=12;),
                 * haga un programa que calcule e imprima la cantidad de días del año que
                 * han pasado hasta dicha fecha. (P.ej: Total días 363).
                 */

                int enero[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30, 31 };
                int febrero[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29 }; // Aqui se puede cambiar el año bisiesto.
                int marzo[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30, 31 };
                int abril[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30 };
                int mayo[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30, 31 };
                int junio[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30 };
                int julio[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30, 31 };
                int agosto[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30, 31 };
                int septiembte[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23,
                                24, 25,
                                26,
                                27, 28, 29, 30 };
                int octubre[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23, 24,
                                25, 26,
                                27, 28, 29, 30, 31 };
                int noviembre[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23,
                                24, 25,
                                26,
                                27, 28, 29, 30 };
                int diciembre[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 14, 16, 17, 18, 19, 20, 21, 22, 23,
                                24, 25,
                                26,
                                27, 28, 29, 30, 31 };

                int mes_año[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };

                int dia = 31;// << Aqui se ingresan los valores (Dias). ***************
                int mes = 12;// << Aqui se ingresan los valores (Meses). **************

                int dias_pasado = 0;

                if (mes == mes_año[1]) {
                        dias_pasado = dia;
                }

                if (mes == mes_año[2]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length;
                }

                if (mes == mes_año[3]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length;
                }

                if (mes == mes_año[4]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length;
                }

                if (mes == mes_año[5]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length;
                }

                if (mes == mes_año[6]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length;
                }

                if (mes == mes_año[7]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length
                                        + junio.length;
                }

                if (mes == mes_año[8]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length
                                        + junio.length + julio.length;
                }

                if (mes == mes_año[9]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length
                                        + junio.length + julio.length + agosto.length;
                }

                if (mes == mes_año[10]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length
                                        + junio.length + julio.length + agosto.length + septiembte.length;
                }

                if (mes == mes_año[11]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length
                                        + junio.length + julio.length + agosto.length + septiembte.length
                                        + octubre.length;
                }

                if (mes == mes_año[12]) {
                        dias_pasado = dia;
                        dias_pasado = dias_pasado + enero.length + febrero.length + marzo.length + abril.length
                                        + mayo.length
                                        + junio.length + julio.length + agosto.length + septiembte.length
                                        + octubre.length
                                        + noviembre.length;
                }

                // Imprimir resultado:
                System.out.println("Han pasado: " + dias_pasado + " dias.");
                System.out.println("(Febrero tiene: " + febrero.length + " dias.)");

        }// Fin del metodo main.
}// Fin de la clase main.
