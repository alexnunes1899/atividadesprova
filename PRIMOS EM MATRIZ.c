#include <stdio.h>

int main() {
    int N, M;

    printf("Digite o número de linhas (N) e colunas (M): ");
    scanf("%d %d", &N, &M);

    int vet[N][M]; // Matriz de tamanho N x M

    printf("Digite os elementos da matriz %dx%d:\n", N, M);

    // Lê os elementos da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &vet[i][j]);
        }
    }

    // Exibe os números primos da matriz
    printf("\nNúmeros primos encontrados na matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int num = vet[i][j];
            int ehPrimo = 1; // Assume que é primo inicialmente

            // Verifica se o número é primo
            if (num <= 1) {
                ehPrimo = 0; // Números <= 1 não são primos
            } else {
                for (int k = 2; k * k <= num; k++) {
                    if (num % k == 0) {
                        ehPrimo = 0; // Não é primo se divisível por k
                        break;       // Sai do loop ao encontrar um divisor
                    }
                }
            }

            // Se for primo, exibe
            if (ehPrimo) {
                printf("%d ", num);
            }
        }
    }
    printf("\n");

    return 0;
}
