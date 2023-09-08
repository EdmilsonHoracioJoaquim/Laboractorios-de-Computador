#include <stdio.h>

int main() {
    float notaprova[5][4];
    int i, j;

    printf("Digite as notas dos alunos (entre 0 e 20):\n");

    // Loop para iterar sobre as linhas (alunos)
    for (i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);

        // Loop para iterar sobre as colunas (notas)
        for (j = 0; j < 4; j++) {
            do {
                printf("Nota %d: ", j + 1);
                scanf("%f", &notaprova[i][j]);

                // Validar a entrada para garantir que a nota está no intervalo de 0 a 20
                if (notaprova[i][j] < 0 || notaprova[i][j] > 20) {
                    printf("Nota fora do intervalo válido (0 a 20). Tente novamente.\n");
                }
            } while (notaprova[i][j] < 0 || notaprova[i][j] > 20);
        }
    }

    // Imprimir as notas dos alunos
    printf("\nNotas dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d: ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%.2f ", notaprova[i][j]);
        }
        printf("\n");
    }

    return 0;
}
