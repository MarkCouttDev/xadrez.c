#include <stdio.h>

int main() {
    // movimento da Torre usando estrutura FOR
    // A Torre se move 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // movimento do Bispo usando estrutura WHILE
    // O Bispo se move 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }

    // movimento da Rainha usando estrutura DO-WHILE
    // A Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}