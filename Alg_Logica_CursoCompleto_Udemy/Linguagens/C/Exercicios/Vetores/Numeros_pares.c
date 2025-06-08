#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    int N;               // Quantidade de números que o usuário vai digitar
    int qtdePares = 0;   // Contador de números pares
    int numeros[10];     // Vetor para armazenar até 10 números inteiros
    int soma = 0;        // (Não está sendo usada, pode ser removida se não for necessária)

    // Solicita ao usuário a quantidade de números que deseja digitar
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    // Laço para leitura dos números digitados
    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    // Exibe os números pares digitados
    printf("NUMEROS PARES: ");
    for (int i = 0; i < N; i++) {
        if (numeros[i] % 2 == 0) {  // Verifica se o número é par
            printf("%d ", numeros[i]);  // Imprime o número par
            qtdePares++;  // Incrementa o contador de pares
        }
    }

    // Exibe a quantidade de números pares encontrados
    printf("\nQTDE NUMEROS PARES = %d\n", qtdePares);

    return 0;  // Finaliza o programa
}
