#include <stdio.h>

int main() {
    int N, M; // Dimensões da matriz
    printf("Digite o número de linhas (N) e colunas (M): ");
    scanf("%d %d", &N, &M);

    int vet[N][M]; // Matriz de tamanho dinâmico
    int maior, menor; // Variáveis para armazenar o maior e o menor número

    printf("Digite os elementos da matriz %dx%d:\n", N, M);

    // Preenche a matriz e encontra o maior e menor número
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &vet[i][j]);

            // Inicializa `maior` e `menor` com o primeiro elemento
            if (i == 0 && j == 0) {
                maior = menor = vet[i][j];
            } else {
                if (vet[i][j] > maior) {
                    maior = vet[i][j];
                }
                if (vet[i][j] < menor) {
                    menor = vet[i][j];
                }
            }
        }
    }

    // Exibe a matriz e os resultados
    printf("\nMatriz inserida:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }

    printf("\nO maior número da matriz é: %d\n", maior);
    printf("O menor número da matriz é: %d\n", menor);

    return 0;
}
