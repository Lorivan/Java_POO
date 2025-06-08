#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int menor;                   // Variável para armazenar o menor valor
    int primeiroValor, segundoValor, terceiroValor;  // Variáveis para os três números

    // Solicita ao usuário o primeiro valor
    printf("Digite o primeiro valor: ");
    scanf("%d", &primeiroValor);

    // Solicita ao usuário o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%d", &segundoValor);

    // Solicita ao usuário o terceiro valor
    printf("Digite o terceiro valor: ");
    scanf("%d", &terceiroValor);

    // Verifica qual dos três valores é o menor
    if (primeiroValor < segundoValor && primeiroValor < terceiroValor) {
        menor = primeiroValor;  // Primeiro é o menor
    } else if (segundoValor < terceiroValor) {
        menor = segundoValor;   // Segundo é o menor
    } else {
        menor = terceiroValor;  // Terceiro é o menor
    }

    // Imprime o menor valor encontrado
    printf("Menor = %d", menor);

    return 0;  // Finaliza o programa
}
