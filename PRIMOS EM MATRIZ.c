#include <stdio.h>

int main() {
    int N, M;

    printf("Digite o n�mero de linhas (N) e colunas (M): ");
    scanf("%d %d", &N, &M);

    int vet[N][M]; // Matriz de tamanho N x M

    printf("Digite os elementos da matriz %dx%d:\n", N, M);

    // L� os elementos da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &vet[i][j]);
        }
    }

    // Exibe os n�meros primos da matriz
    printf("\nN�meros primos encontrados na matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int num = vet[i][j];
            int ehPrimo = 1; // Assume que � primo inicialmente

            // Verifica se o n�mero � primo
            if (num <= 1) {
                ehPrimo = 0; // N�meros <= 1 n�o s�o primos
            } else {
                for (int k = 2; k * k <= num; k++) {
                    if (num % k == 0) {
                        ehPrimo = 0; // N�o � primo se divis�vel por k
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
