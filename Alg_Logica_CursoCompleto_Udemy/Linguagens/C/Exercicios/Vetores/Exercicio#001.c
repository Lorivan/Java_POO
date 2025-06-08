#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int N;          // Quantidade de números que o usuário deseja digitar
    int i;          // Variável para controlar os loops

    // Pergunta ao usuário quantos números ele quer digitar
    printf("Quantos numeros voce deseja digitar? : ");
    scanf("%d", &N);

    double vet[N];  // Declara um vetor de tamanho N para armazenar números do tipo double

    // Loop para ler os N números digitados pelo usuário
    for(i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    // Imprime os números digitados pelo usuário
    printf("\nNUMEROS DIGITADOS\n: ");
    for(i = 0; i < N; i++) {
        printf("%.1lf  ", vet[i]);  // Imprime cada número com uma casa decimal
    }

    return 0;  // Finaliza o programa
}
