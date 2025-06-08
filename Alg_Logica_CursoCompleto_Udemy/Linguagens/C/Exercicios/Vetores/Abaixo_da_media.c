#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {
    int N;                  // Quantidade de elementos no vetor
    float media = 0;        // Variável para armazenar a média dos valores
    float soma = 0;         // Variável para armazenar a soma dos elementos
    float vet[100];         // Vetor com capacidade para até 100 elementos

    // Solicita ao usuário a quantidade de elementos do vetor
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &N);

    // Leitura dos elementos do vetor
    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);  // Armazena cada valor lido no vetor
    }

    // Calcula a soma de todos os elementos do vetor
    for (int i = 0; i < N; i++) {
        soma += vet[i];
    }

    // Calcula a média dos elementos
    media = soma / N;

    // Imprime a média com três casas decimais
    printf("Media do vetor: %.3f\n", media);

    // Imprime os elementos que estão abaixo da média
    printf("ELEMENTOS ABAIXO DA MEDIA:\n");
    for (int i = 0; i < N; i++) {
        if (vet[i] < media) {
            printf("%.1f\n", vet[i]);  // Imprime o valor com uma casa decimal
        }
    }

    printf("\n");  // Apenas para organizar visualmente a saída

    return 0;  // Encerra o programa
}
