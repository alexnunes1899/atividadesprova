#include <stdio.h>

int main() {
    int N;
    printf("Digite o tamanho da matriz quadrada (N x N): ");
    scanf("%d", &N);

    int vet[N][N]; // Matriz quadrada
    int produto = 1; // Inicializamos o produto com 1 (neutro da multiplicação)

    printf("Digite os elementos da matriz %dx%d:\n", N, N);

    // Preenche a matriz e calcula o produto da diagonal principal
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &vet[i][j]);
            if (i == j) { // Verifica se o elemento está na diagonal principal
                produto = produto * vet[i][j]; // Sem usar *=
            }
        }
    }

    // Exibe a matriz e o resultado
    printf("\nMatriz inserida:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }

    printf("\nO produto dos elementos da diagonal principal é: %d\n", produto);

    return 0;
}
