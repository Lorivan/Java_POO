#include <stdio.h>  // Biblioteca para entrada e saída padrão

int main() {
    int N;                 // Quantidade de elementos em cada vetor
    int vet01[50];         // Vetor A, com capacidade para até 50 elementos
    int vet02[50];         // Vetor B, com capacidade para até 50 elementos
    int vet03[50];         // Vetor C (resultado da soma dos vetores A e B)

    // Solicita ao usuário o tamanho dos vetores
    printf("Digite quantidade numeros que vai ter cada vetor: ");
    scanf("%d", &N);

    // Verifica se o valor digitado está dentro do limite permitido
    if (N > 50 || N < 1) {
        printf("Tamanho invalido. O valor deve estar entre 1 a 50\n");
        return 1;  // Encerra o programa se o valor for inválido
    }

    // Leitura dos elementos do vetor A
    printf("Digite os numeros do vetor A: \n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vet01[i]);
    }

    // Leitura dos elementos do vetor B
    printf("Digite os numeros do vetor B: \n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &vet02[i]);
    }

    // Soma dos vetores A e B, armazenando o resultado no vetor C
    for (int i = 0; i < N; i++) {
        vet03[i] = vet01[i] + vet02[i];
    }

    // Impressão do vetor resultante C (A + B)
    printf("\nVALORES RESULTANTES A + B:\n");
    for (int i = 0; i < N; i++) {
        printf("%d  ", vet03[i]);
    }

    printf("\n");  // Quebra de linha ao final da saída

    return 0;  // Encerra o programa com sucesso
}
