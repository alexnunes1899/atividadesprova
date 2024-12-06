#include <stdio.h>

int main() {
    int N, M; // Dimens�es da matriz
    printf("Digite o n�mero de linhas (N) e colunas (M): ");
    scanf("%d %d", &N, &M);

    int vet[N][M]; // Matriz de tamanho din�mico
    int maior, menor; // Vari�veis para armazenar o maior e o menor n�mero

    printf("Digite os elementos da matriz %dx%d:\n", N, M);

    // Preenche a matriz e encontra o maior e menor n�mero
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

    printf("\nO maior n�mero da matriz �: %d\n", maior);
    printf("O menor n�mero da matriz �: %d\n", menor);

    return 0;
}
