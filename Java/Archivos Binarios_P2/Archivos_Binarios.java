import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Archivos_Binarios {

    public static Carros E[] = new Carros[20];
    public static String ruta = "C:\\Users\\jackl\\Documents\\GitHub\\Java\\Programacion 2\\Practicas en Casa\\Archivos Binarios\\Carros.Dat";

    // Inicializa los objetos.
    public static void Inicializa() {
        for (int i = 0; i <= 19; i++) {
            E[i] = new Carros();
        }
    }

    public static void AgregaDatos() {
        E[1].AgregarDatos("C01", "BMW", "Negro", 2023, 500400.30, true);
        E[2].AgregarDatos("C02", "Ford", "Rojo", 2015, 103000.73, false);
        E[3].AgregarDatos("C03", "Toyota", "Negro", 2020, 202000.4, true);
        E[4].AgregarDatos("C04", "Hiundai", "Azul", 2021, 330000.44, false);
        E[5].AgregarDatos("C05", "Toyota", "Cafe", 2018, 200400.64, true);
    }

    public static void Imprimir() {

        for (int i = 1; i <= 5; i++) {
            E[i].Imprimir();
        }
    }

    public static void Escritura() {
        FileOutputStream fos = null;
        DataOutputStream dos = null;

        try {
            fos = new FileOutputStream(ruta);
            dos = new DataOutputStream(fos);
            for (int k = 1; k <= 5; k++) {
                dos.writeUTF(E[k].Codigo);
                dos.writeUTF(E[k].Marca);
                dos.writeInt(E[k].Año);
                dos.writeDouble(E[k].Costo);
                dos.writeBoolean(E[k].Garantia);
            }
            dos.close();
        } catch (IOException e) {
            System.out.println("Error de escritura");
        }

    }

    public static void Escritura2() {

    }

    public static void Lectura() {
        FileInputStream fis = null;
        DataInputStream Entrada = null;
        int k = 0;
        try {
            fis = new FileInputStream(ruta);
            Entrada = new DataInputStream(fis);

            while (Entrada.available() > 0) {
                k = k + 1;
                E[k].Codigo = Entrada.readUTF();
                E[k].Marca = Entrada.readUTF();
                E[k].Año = Entrada.readInt();
                E[k].Costo = Entrada.readDouble();
                E[k].Garantia = Entrada.readBoolean();
            }
            Entrada.close();

        }

        catch (IOException e) {
            System.out.println("Error de Lectura...");
        }

    }// Fin del metodo Lectura

    public static void main(String[] args) {

        System.out.println("Inicia Programa");
        Inicializa(); // Inicializa los Objetos
        // AgregaDatos();// Guarda Datos en las variables
        System.out.println(
                "\t" + "Cod" + "\t" + "Marca" + "\t" + "   Color" + "\t" + "Año" + "\t " + "Costo" + " \t"
                        + "Garantia");
        // Imprimir();// Imprime los datos y el titulo
        // Escritura();
        Lectura();
        Imprimir();
        System.out.println("Fin del programa");
    }
}