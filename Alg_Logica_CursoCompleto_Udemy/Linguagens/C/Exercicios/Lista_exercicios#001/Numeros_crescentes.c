#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {
    int x, y;  // Variáveis para armazenar os dois números digitados pelo usuário

    // Solicita os dois números iniciais
    printf("Digite dois numeros: ");
    scanf("%d", &x);
    scanf("%d", &y);

    // Enquanto os números forem diferentes, o loop continua
    while (x != y) {
        if (x < y) {
            printf("CRESCENTE: %d\n", x);  // Imprime "CRESCENTE" e o valor de x
        } else {
            printf("DECRESCENTE: %d\n", x);  // Imprime "DECRESCENTE" e o valor de x
        }

        // Solicita que o usuário digite outros dois números para repetir a verificação
        printf("Digite outros dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    // Quando os dois números forem iguais, o programa termina
    return 0;
}
