#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int M, N;  // M = número de linhas, N = número de colunas da matriz
    int i, j;  // Variáveis para controlar os loops

    // Solicita ao usuário o número de linhas da matriz
    printf("Quantas linhas vai ter a matriz?: ");
    scanf("%d", &M);

    // Solicita ao usuário o número de colunas da matriz
    printf("Quantas colunas vai ter a matriz?: ");
    scanf("%d", &N);

    int matriz[M][N];  // Declara uma matriz com M linhas e N colunas

    // Leitura dos elementos da matriz
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibe a matriz digitada
    printf("\nMATRIZ DIGITADA:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;  // Encerra o programa
}
