package Exercicios;

public class Contagens {
    public static void main(String[] args) {

        System.out.println("Contagem crescente");
        contagemCrescente();

        System.out.println("\nContagem decrescente");
        contagemDecrescente();
    }

    public static void contagemCrescente() {

        for (int i = 0; i < 5; i++) {
            System.out.println("O valor de i: " + i);

        }

    }

    public static void contagemDecrescente() {
        for (int i = 5; i > 0; i--) {
            System.out.println("O valor de i: " + i);

        }

    }
}
