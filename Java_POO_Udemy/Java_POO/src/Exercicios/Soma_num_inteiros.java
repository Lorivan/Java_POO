import javax.management.PersistentMBean;
import java.util.Scanner;

public class Soma_num_inteiros {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int x;
        int y;
        int soma;
        x = sc.nextInt();
        y = sc.nextInt();

        soma = x + y;

        System.out.println("SOMA = " + soma);

        sc.close();
    }
}