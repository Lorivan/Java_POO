import java.util.Locale;
import java.util.Scanner;

public class CalculoPlano {
    public static void  main (String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc  = new Scanner(System.in);

        int minutos = sc.nextInt();

        double valorConta = 50.0;
        if (minutos > 100){
            valorConta = valorConta + (minutos - 100) * 2.0;
            System.out.printf("O valor da conta %.2f%n",valorConta);
        }

        sc.close();
    }
}