import java.util.Locale;
import java.util.Scanner;

public class Calculo_area {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);
        double largura;
        double comprimento;
        double area;
        double metroQuadrado;
        double preco;

        largura = sc.nextDouble();
        comprimento = sc.nextDouble();
        metroQuadrado = sc.nextDouble();

        area = largura * comprimento;
        preco = area * metroQuadrado;

        System.out.printf("AREA = %.2f%n", area);
        System.out.printf("PRECO = %.2f%n ", preco);

        sc.close();

    }
}