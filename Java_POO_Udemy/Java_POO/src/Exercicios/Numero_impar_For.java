import java.util.Scanner;

public class Numero_impar_For {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Digite um numero entre 1 e 1000: ");

        int x = sc.nextInt();

        if (x < 1 || x > 1000) {
            System.out.println("Valor fora do intervalo de 1 a 1000");
        } else {
            for (int i = 1; i <= x; i++) {
                if (i % 2 != 0) {
                    System.out.println(i);
                }

            }

        }
        sc.close();
    }
}
