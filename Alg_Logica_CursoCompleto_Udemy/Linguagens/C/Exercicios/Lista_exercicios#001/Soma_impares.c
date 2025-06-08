#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int x, y;       // Dois números inteiros digitados pelo usuário
    int troca;      // Variável auxiliar para troca de valores
    int soma;       // Variável para armazenar a soma dos números ímpares entre x e y

    // Solicita ao usuário que digite dois números
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    // Garante que x seja o menor e y o maior, fazendo troca se necessário
    if (x > y) {
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;  // Inicializa a soma com zero

    // Percorre os números entre x e y (excluindo x e y)
    for (int i = x + 1; i < y; i++) {
        if (i % 2 != 0) {  // Verifica se o número é ímpar
            soma = soma + i;  // Soma os números ímpares
        }
    }

    // Exibe o resultado da soma dos números ímpares
    printf("Soma = %d\n", soma);

    return 0;  // Finaliza o programa
}
