#include <stdio.h>

int main() {
    int matriz[4][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {9, 10, 11, 12, 13, 14, 15, 16},
        {17, 18, 19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30, 31, 32}
    };

    int soma_linha[4] = {0}; // Inicializa o vetor soma_linha com zeros

    // Calcula a soma de cada linha da matriz e armazena no vetor soma_linha
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            soma_linha[i] += matriz[i][j];
        }
    }

    // Imprime os valores da matriz
    printf("Matriz 4x8:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Imprime os valores do vetor soma_linha
    printf("\nVetor soma_linha:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\n", soma_linha[i]);
    }

    return 0;
}
