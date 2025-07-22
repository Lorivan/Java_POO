import java.util.Locale;
import java.util.Scanner;

public class Media_aluno {
    public static void main(String[] args){
        Locale.setDefault(Locale.US);
        Scanner sc  = new Scanner(System.in);

        System.out.println("Digite uma Nota");
        double nota1 = sc.nextDouble();
        double nota2 = sc.nextDouble();

        double notaFinal = nota1 + nota2;

        double media = notaFinal / 2;

        System.out.printf("A media final é %.2f%n",media);

        sc.close();
    }
}