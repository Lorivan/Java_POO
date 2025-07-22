import java.util.Locale;
import java.util.Scanner;

public class Calculo_raio {
    public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        double raio;
        double area;
        double PI = 3.14159;

        raio = sc.nextDouble();

        area = PI * (raio * raio);

        System.out.printf("A = %.4f%n",area);

        sc.close();

    }
}