package Exercicios;

import java.util.Scanner;

public class Estrutura_While {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite o numero desejado: ");

        int x = sc.nextInt();

        int soma = 0;

        while (x != 0) {
            soma = soma + x;
            x = sc.nextInt();
        }
        System.out.println("A soma dos numero digitados " + soma);

        sc.close();
    }
}