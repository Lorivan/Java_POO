import java.util.Scanner;

public class diaSemanaSwitch {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite um dia da semana:");

        int x = scanner.nextInt();
        String dia;

        switch (x) {
            case 1:
                dia = "Domingo";
                break;
            case 2:
                dia = "Segunda";
                break;
            case 3:
                dia = "Terca";
                break;
            case 4:
                dia = "Quarta";
                break;
            case 5:
                dia = "Quinta";
                break;
            case 6:
                dia = "Sexta";
                break;
            case 7:
                dia = "Sabado";
                break;

            default:
                dia = "Valor invalido";
        }
        System.out.println("O dia da semana e : " + dia);
        scanner.close();

    }
}