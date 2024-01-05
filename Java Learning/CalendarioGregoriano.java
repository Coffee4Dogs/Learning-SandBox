
import java.util.Scanner;

public class Lab22 {

    // Congruencia de zellerGregoriano
    public static int zellerGregoriano(int año, int mes) { // Gregoriano
        int a = (14 - mes) / 12;
        int y = año - a;
        int m = mes + 12 * a - 2;
        int dia = 1; // Queremos buscar dsia (el primer dia de la semana)
        int h = 0;
        h = (dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

        return h;/**********************************
                  ** Retorna el día de la semana. ** dsia, mes,
                  * (0 = sábado, 1 = domingo, 2 = lunes, 3 = martes,
                  * 4 = miércoles, 5 = jueves, 6 = viernes).
                  */
    }

    // Congruencia de Zeller pero con 3 variables para la opcion 3 del menu.
    public static int BuscadorGregoriano(int año, int mes, int dia) { // Gregoriano
        int a = (14 - mes) / 12;
        int y = año - a;
        int m = mes + 12 * a - 2;
        int h = 0;
        h = (dia + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

        return h;/**********************************
                  ** Retorna el día de la semana. **
                  * (0 = sábado, 1 = domingo, 2 = lunes, 3 = martes,
                  * 4 = miércoles, 5 = jueves, 6 = viernes).
                  */
    }

    public static int Bisiesto(int año) { // Metodo Bisiesto----------------------
        if (año % 100 == 0) {
            if (año % 400 == 0)
                return 1;
            else
                return 0;
        } // Fin del if 100
        else if (año % 4 == 0)
            return 1;
        else
            return 0;
    }// Fin del metodo bisiesto ------------------------------------------------

    public static int Dia_Inicio_Año(int año) { // ---------------------------------
        int dsia = 0;
        // Previamente teniamos:
        /*
         * 0 = Domingo | 1 = Lunes | 2 = Martes | 3 = Miercoles | 4 = Jueves |
         * 5 = Viernes | 6 = Sabado
         * 
         * Esto era lo que teniamos antes.
         * if (año == 2001)
         * dsia = 1;// 1 = Lunes
         * if (año == 2002)
         * dsia = 2;// 2 = Martes
         * if (año == 2003)
         * dsia = 3;// 3 = Miercoles
         * if (año == 2004)
         * dsia = 4;// 4 = Jueves
         * if (año == 2005)
         * dsia = 6;// 6 = Sabado
         * if (año == 2006)
         */
        return dsia;
    }// Fin del metodo Dia_Inicio_Año --------------------------------------------

    public static void Imprime_Mes(int mes, int año) {

        int dia = 0;
        int dsim = 2; // Total de dia inical del mes
        // int dsia = Dia_Inicio_Año(año); // Dia inicial del año
        int dsia = zellerGregoriano(año, 1);
        int cim[] = { 0, 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5 }; // codigo inicio de mes
        int tdm[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // Total de dia del mes.
        String nomMes[] = { "yy", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto",
                "Septiembre", "Octubre", "Noviembre", "Diciembre" };
        tdm[2] = 28 + Bisiesto(año);
        dsim = dsia + cim[mes];
        if (mes >= 3)
            dsim = dsim + Bisiesto(año);
        System.out.println(nomMes[mes] + "\t" + año);
        System.out.println("--------------------");
        System.out.println(
                "DO" + "\t" + "LU" + "\t" + "MA" + "\t" + "MI" + "\t" + "JU" + "\t" + "VI" + "\t" + "SA" + "\t");
        System.out.println("...................................................");
        for (int c = 1; c <= 42; c++) {
            if (c > dsim && dia < tdm[mes]) {
                dia = dia + 1;
                // int h = zellerGregoriano(año, mes) //zellerGregoriano
                System.out.print(dia + "\t");
            } // Fin del if c
            else
                System.out.print("" + "\t");

            if (c % 7 == 0)
                System.out.println("");

        } // Fin del for c

    }// Fin del metodo Imprime_Mes

    public static void OpcionesMenu() {
        System.out.println("Menu");
        System.out.println("Seleccione una opcion:");
        System.out.println("1. Calendario del mes.");
        System.out.println("2. Calendario del año.");
        System.out.println("3. Día de la semana de una fecha.");
        System.out.println("4. Número de Años, meses y días entre dos fechas.");
        System.out.println("5. Número de días entre dos fechas.");
        System.out.println("6. Salir.");

    }

    public static void DiasSemana(int dsia) {
        /*
         * Esta funcion existe en el menu, opcion 3.
         * Recibe la variable dsia y compara que dia es.
         * Recordemos que dsia ahora es la solucion de h = Formula de Zeller.
         * Dependiendo de si se utilizo la formula de zeller para el calendario juliano
         * o el calendario gregoriano.
         * Luego devuelve como resultado el dia de la semana.
         */
        String Dia_Semana;
        if (dsia == 0) {
            Dia_Semana = "Domingo.\nRelájate y prepárate para una nueva semana llena de posibilidades. ";
        } else if (dsia == 1) {
            Dia_Semana = "\tLunes\nComienza la semana con energía y determinación.";
        } else if (dsia == 2) {
            Dia_Semana = "\tMartes\nAprovecha cada oportunidad que se presente en tu camino.";
        } else if (dsia == 3) {
            Dia_Semana = "\tMiércoles\nMantén la calma y recuerda que estás a mitad de semana.";
        } else if (dsia == 4) {
            Dia_Semana = "\tJueves.\n No te rindas, el fin de semana está a punto de llegar.";
        } else if (dsia == 5) {
            Dia_Semana = "\tViernes.\n ¡Hoy es viernes y el cuerpo lo sabe! Disfruta al máximo.";
        } else {
            Dia_Semana = "\tSábado\nDedica tiempo a hacer lo que te hace feliz y recarga energías.";
        }
        System.out.println("El día de la semana es: " + Dia_Semana + dsia);
    }// Fin de funcion DiasSemana

    public static int DiasQueFaltan(int dia, int mes) {
        int total = 0;
        total = 365 - DiaDelAño(dia, mes);

        return total;
    }

    public static int DiaDelAño(int dia, int mes) {
        int total = 0;
        int tdm[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        for (int k = 1; k <= mes - 1; k++)
            total = total + tdm[k];
        total = total + dia;

        return total;
    }

    public static int DiasEntreFechas(int d1, int m1, int a1, int d2, int m2, int a2) {
        int h = 0;
        int df1, df2; // Df = Dias que faltan.
        int Af, Ai;

        Af = a2;
        Ai = a1;

        df1 = DiasQueFaltan(d1, m1);
        df2 = DiasQueFaltan(d2, m2);
        df2 = 365 - df2;

        df1 = df1 + df2;// Total de Dias que faltan Inicial y Final.

        h = (Af - Ai - 1) * 365; // Años
        h = h + df1; // Suamndolo con los dias.

        if (m1 < 3 && Bisiesto(a1) == 1)
            h = h + 1;
        if (m2 < 3 && Bisiesto(a2) == 1)
            h = h + 1;

        if (h < 1) {
            h = h * -1;
        }
        h = h + CuentaBisiesto(a1, a2);
        return h;
    }

    public static int CuentaBisiesto(int año1, int año2) {
        int total;
        total = 0;
        for (int k = año1 + 1; k <= año2; k++) {
            total = total + Bisiesto(k);

        }

        return total;

    }

    public static void main(String[] args) {

        int Total_Dias;
        Total_Dias = 0;
        int tdm[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int tdmB[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int bisiestos;
        bisiestos = 0;
        String console;
        console = "\t~ $ sudo apt get ";
        int i = 1;
        int menu;
        Scanner input = new Scanner(System.in);
        int Mes_Ingresado, Año_Ingresado, Dia_Ingresado;
        int Mes_IngresadoB, Año_IngresadoB, Dia_IngresadoB;
        int Mes_IngresadoC, Año_IngresadoC, Dia_IngresadoC;
        Año_Ingresado = 0;
        Mes_Ingresado = 0;
        Dia_Ingresado = 0;
        Mes_IngresadoB = 0;
        Año_IngresadoB = 0;
        Dia_IngresadoB = 0;
        Año_IngresadoC = 0;
        Mes_IngresadoC = 0;
        Dia_IngresadoC = 0;
        Boolean Gregoriano; // Usada en la opcion 3. Para saber si es calendario gregoriano o no.
        Gregoriano = null; // Inicializando la variable sin valor alguno.
        int dsia; // dia en que inicia el empieza el año. Tambien la uso para los meses.
        dsia = 0;
        String Dia_Semana;
        Dia_Semana = "";
        int j = 1;
        while (i < 2) {
            OpcionesMenu();
            menu = input.nextInt();

            if (menu == 1) {// ----------------------Opcion1--------------------------------------------
                System.out.println(console + "1. Calendario del mes seleccionado.");

                j = 1;
                while (j < 2) {// Preguntar mes entre 1 a 12 solamente.
                    System.out.println("Que mes quiere imprimir? \nSeleccione un numero del 1 - 12");
                    Mes_Ingresado = input.nextInt();
                    if (Mes_Ingresado >= 1 && Mes_Ingresado <= 12) {
                        j = j + 1;
                    } else {
                        System.out.println("Escriba un mes entre 1 al 12");
                        j = 1;
                    }
                }

                j = 1;
                while (j < 2) {// Preguntar años entre 1 a 2099 solamente.
                    System.out.println("\nQue año quiere imprimir?\nRango entre: 1 - 2099.");
                    Año_Ingresado = input.nextInt();
                    if (Año_Ingresado >= 1 && Año_Ingresado <= 2099) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }
                Imprime_Mes(Mes_Ingresado, Año_Ingresado);

            } else if (menu == 2) {// ----------------------Opcion2---------------------------------------------
                System.out.println("2. Calendario del año seleccionado.");

                j = 1;
                while (j < 2) {// Preguntar los años entre 1 a 2099 solamente.
                    System.out.println("\nQue año quiere imprimir?\nRango entre: 1 - 2099.");
                    Año_Ingresado = input.nextInt();
                    if (Año_Ingresado >= 1 && Año_Ingresado <= 2099) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                for (int mes = 1; mes <= 12; mes++) {
                    Imprime_Mes(mes, Año_Ingresado);
                }

            } else if (menu == 3) {// ----------------------Opcion3-------------------------------------
                System.out.println(console + "3. Día de la semana de una fecha seleccionado.");

                j = 1;

                while (j < 2) {// Preguntar que años quiere buscar.
                    System.out.println("\nQue año quiere imprimir?\nRango entre: 1 - 2099.");
                    Año_Ingresado = input.nextInt();
                    if (Año_Ingresado >= 1 && Año_Ingresado <= 2099) {

                        j = j + 1;

                    } else {
                        System.out.println("ERROR! El rango tiene que ser entre 1 - 2099...");
                        j = 1;
                    }

                }

                j = 1;
                while (j < 2) {// Preguntar que meses quiere buscar.
                    System.out.println("Que mes quiere imprimir? \nSeleccione un numero del 1 - 12");
                    Mes_Ingresado = input.nextInt();
                    if (Mes_Ingresado >= 1 && Mes_Ingresado <= 12) {
                        j = j + 1;
                    } else {
                        System.out.println("ERROR! El rango tiene que ser entre 1 - 12");
                        j = 1;
                    }
                }

                tdm[2] = 28 + Bisiesto(Año_Ingresado);// Preguntar que dia quiere buscar
                j = 1;
                while (j < 2) {// Limitador entre 31, 30, 29 y 28.
                    System.out.println("Que dia quiere buscar? \nSeleccione un numero del 1 - " + tdm[Mes_Ingresado]);
                    Dia_Ingresado = input.nextInt();
                    if (Dia_Ingresado >= 1 && Dia_Ingresado <= tdm[Mes_Ingresado]) {
                        j = j + 1;
                    } else {
                        System.out.println("ERROR! El dia tiene que ser entre 1 - " + tdm[Mes_Ingresado]);
                        j = 1;
                    }
                }

                System.out.println("***Calendario Gregoriano***");
                System.out.println("Dia ingresado:" + Dia_Ingresado);
                dsia = BuscadorGregoriano(Año_Ingresado, Mes_Ingresado, Dia_Ingresado);
                DiasSemana(dsia);
                System.out.println(dsia);

            } else if (menu == 4) {// ------------------------------Opcion4--------------------------------
                System.out.println(console + "4. Número de Años, meses y días entre dos fechas seleccionado.");

                j = 1;
                while (j < 2) {// Preguntar año A
                    System.out.println("\nPrimero defina el AÑO A\nRango entre: 1 - 2099.");
                    Año_Ingresado = input.nextInt();
                    if (Año_Ingresado >= 1 && Año_Ingresado <= 2099) {
                        j = j + 1;
                    } else {
                        System.out.println("Ingrese un año entre 1 - 2099...");
                        j = 1;
                    }
                }

                j = 1;
                while (j < 2) {// Preguntar Mes A
                    System.out.println("Defina el MES A\nSeleccione un numero del 1 - 12");
                    Mes_Ingresado = input.nextInt();
                    if (Mes_Ingresado >= 1 && Mes_Ingresado <= 12) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                tdm[2] = 28 + Bisiesto(Año_Ingresado);// Preguntar Dias A
                j = 1;
                while (j < 2) {// Limitador entre 31, 30, 29 y 28.
                    System.out.println("Defina el dia A\nSeleccione un numero del 1 - " + tdm[Mes_Ingresado]);
                    Dia_Ingresado = input.nextInt();
                    if (Dia_Ingresado >= 1 && Dia_Ingresado <= tdm[Mes_Ingresado]) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                // Reesablecer TDM a sus valores por defecto, porque se habia manipulado con
                // Año_Ingresado previamente. Entonces hay que dejarlo con sus valores por def.
                tdm[1] = 31;
                tdm[2] = 28;
                tdm[3] = 31;
                tdm[4] = 30;
                tdm[5] = 31;
                tdm[6] = 30;
                tdm[7] = 31;
                tdm[8] = 31;
                tdm[9] = 30;
                tdm[10] = 31;
                tdm[11] = 30;
                tdm[12] = 31;

                j = 1;
                while (j < 2) {// Preguntar año B
                    System.out.println("\nPrimero defina el AÑO B\nRango entre: 1 - 2099.");
                    Año_IngresadoB = input.nextInt();
                    // Ahora que TDM tiene los valores por defecto lo volvemos a manipular pero con
                    // el AÑOB como lo hicimos anteriormente.
                    if (Año_IngresadoB >= 1 && Año_IngresadoB <= 2099) {
                        j = j + 1;
                    } else {
                        System.out.println("Ingrese un año entre 1 - 2099...");
                        j = 1;
                    }
                }

                j = 1;
                while (j < 2) {// Preguntar Meses B
                    System.out.println("Defina el MES B\nSeleccione un numero del 1 - 12");
                    Mes_IngresadoB = input.nextInt();
                    if (Mes_IngresadoB >= 1 && Mes_IngresadoB <= 12) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                tdm[2] = 28 + Bisiesto(Año_IngresadoB);// Preguntar Dias B
                j = 1;
                while (j < 2) {// Limitador entre 31, 30, 29 y 28.
                    System.out.println("Defina el dia B\nSeleccione un numero del 1 - " + tdm[Mes_IngresadoB]);
                    Dia_IngresadoB = input.nextInt();
                    if (Dia_IngresadoB >= 1 && Dia_IngresadoB <= tdm[Mes_IngresadoB]) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                // ----------------
                // C = A - B
                // Restar los Años A - B. Restar los Mese A - B. " " Dias A - B.
                // Se considera el caso en el que el numero sea negativo.
                Año_IngresadoC = Año_Ingresado - Año_IngresadoB;
                if (Año_IngresadoC < 1)
                    Año_IngresadoC = Año_IngresadoC * -1; // En caso sea negativo.

                // Calcular los meses.
                Mes_IngresadoC = Mes_Ingresado - Mes_IngresadoB;
                if (Mes_IngresadoC < 1)
                    Mes_IngresadoC = Mes_IngresadoC * -1;// En caso sea negativo.

                // Calcular los dias.
                Dia_IngresadoC = Dia_Ingresado - Dia_IngresadoB;
                if (Dia_IngresadoC < 1)
                    Dia_IngresadoC = Dia_IngresadoC * -1;// En caso sea negativo.

                // Resultado del menu 4.
                System.out.println("Número de años, meses y días entre: " + Dia_Ingresado + "/" + Mes_Ingresado + "/"
                        + Año_Ingresado + " y " + Dia_IngresadoB + "/" + Mes_IngresadoB + "/" + Año_IngresadoB);
                System.out.println(
                        "Años(" + Año_IngresadoC + ") , Mes es(" + Mes_IngresadoC + "), Dias(" + Dia_IngresadoC + ").");

            } else if (menu == 5) {// ------------------------------Opcion5--------------------------------
                System.out.println(console + "5. Número de días entre dos fechas seleccionado.");

                j = 1;
                while (j < 2) {// Preguntar año A
                    System.out.println("\nPrimero defina el AÑO A\nRango entre: 1 - 2099.");
                    Año_Ingresado = input.nextInt();
                    if (Año_Ingresado >= 1 && Año_Ingresado <= 2099) {
                        j = j + 1;
                    } else {
                        System.out.println("Ingrese un año entre 1 - 2099...");
                        j = 1;
                    }
                }

                j = 1;
                while (j < 2) {// Preguntar Mes A
                    System.out.println("Defina el MES A\nSeleccione un numero del 1 - 12");
                    Mes_Ingresado = input.nextInt();
                    if (Mes_Ingresado >= 1 && Mes_Ingresado <= 12) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                tdm[2] = 28 + Bisiesto(Año_Ingresado);// Preguntar Dias A
                j = 1;
                while (j < 2) {// Limitador entre 31, 30, 29 y 28.
                    System.out.println("Defina el dia A\nSeleccione un numero del 1 - " + tdm[Mes_Ingresado]);
                    Dia_Ingresado = input.nextInt();
                    if (Dia_Ingresado >= 1 && Dia_Ingresado <= tdm[Mes_Ingresado]) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                // Reesablecer TDM a sus valores por defecto, porque se habia manipulado con
                // Año_Ingresado previamente. Entonces hay que dejarlo con sus valores por def.
                tdm[1] = 31;
                tdm[2] = 28;
                tdm[3] = 31;
                tdm[4] = 30;
                tdm[5] = 31;
                tdm[6] = 30;
                tdm[7] = 31;
                tdm[8] = 31;
                tdm[9] = 30;
                tdm[10] = 31;
                tdm[11] = 30;
                tdm[12] = 31;

                j = 1;
                while (j < 2) {// Preguntar año B
                    System.out.println("\nPrimero defina el AÑO B\nRango entre: 1 - 2099.");
                    Año_IngresadoB = input.nextInt();
                    // Ahora que TDM tiene los valores por defecto lo volvemos a manipular pero con
                    // el AÑOB como lo hicimos anteriormente.
                    if (Año_IngresadoB >= 1 && Año_IngresadoB <= 2099) {
                        j = j + 1;
                    } else {
                        System.out.println("Ingrese un año entre 1 - 2099...");
                        j = 1;
                    }
                }

                j = 1;
                while (j < 2) {// Preguntar Meses B
                    System.out.println("Defina el MES B\nSeleccione un numero del 1 - 12");
                    Mes_IngresadoB = input.nextInt();
                    if (Mes_IngresadoB >= 1 && Mes_IngresadoB <= 12) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }

                tdm[2] = 28 + Bisiesto(Año_IngresadoB);// Preguntar Dias B
                j = 1;
                while (j < 2) {// Limitador entre 31, 30, 29 y 28.
                    System.out.println("Defina el dia B\nSeleccione un numero del 1 - " + tdm[Mes_IngresadoB]);
                    Dia_IngresadoB = input.nextInt();
                    if (Dia_IngresadoB >= 1 && Dia_IngresadoB <= tdm[Mes_IngresadoB]) {
                        j = j + 1;
                    } else {
                        j = 1;
                    }
                }
                System.out.println("Calendario Gregoriano \n");
                System.out.print("La cantidad de dias es: ");
                // -----Dias Entre Fechas: diaA,mesA,añoA |diaB,mesB,añoB (VISTO EN CLASE)

                System.out.print(DiasEntreFechas(Dia_Ingresado, Mes_Ingresado, Año_Ingresado, Dia_IngresadoB,
                        Mes_IngresadoB, Año_IngresadoB));
                System.out.println("\n");

            } else if (menu == 6) {// Salir.
                i = i + 1;
            } else {
                System.out.println("~ $ Error al ingresar un numero!Intente nuevamente.");
            }

        } // **************Fin del Menu******************

    } // fin del metodo main

}
// Fin de la clase main
