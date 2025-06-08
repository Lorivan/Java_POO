#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int N;  // Quantidade de números que o usuário vai digitar

    // Pergunta ao usuário quantos números ele vai digitar
    printf("Quantos numeros voce vai digitar?: ");
    scanf("%d", &N);

    int vet[N];  // Declara um vetor de tamanho N

    // Loop para leitura dos números digitados pelo usuário
    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    // Exibe os números negativos digitados
    printf("\nNUMEROS NEGATIVOS:\n");
    for (int i = 0; i < N; i++) {
        if (vet[i] < 0) {  // Verifica se o número é negativo
            printf("%d\n", vet[i]);
        }
    }

    return 0;  // Finaliza o programa
}
