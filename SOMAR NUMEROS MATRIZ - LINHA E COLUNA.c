#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define MAX 100

bool jaContabilizado(int numero, int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == numero) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, "");

    int M, N;
    int matriz[MAX][MAX];
    int linhaEscolhida, colunaEscolhida;
    int valoresUnicos[MAX * 2];
    int contadorUnicos = 0;

    printf("Digite o número de linhas (M): ");
    scanf("%d", &M);

    if (M <= 0 || M > MAX) {
        printf("Número de linhas inválido!\n");
        return 1;
    }

    printf("Digite o número de colunas (N): ");
    scanf("%d", &N);

    if (N <= 0 || N > MAX) {
        printf("Número de colunas inválido!\n");
        return 1;
    }

    printf("Digite os elementos da matriz (%d x %d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (scanf("%d", &matriz[i][j]) != 1) {
                printf("Entrada inválida!\n");
                return 1;
            }
        }
    }

    printf("Digite o índice da linha para somar (0 a %d): ", M - 1);
    if (scanf("%d", &linhaEscolhida) != 1 || linhaEscolhida < 0 || linhaEscolhida >= M) {
        printf("Índice da linha inválido!\n");
        return 1;
    }

    printf("Digite o índice da coluna para somar (0 a %d): ", N - 1);
    if (scanf("%d", &colunaEscolhida) != 1 || colunaEscolhida < 0 || colunaEscolhida >= N) {
        printf("Índice da coluna inválido!\n");
        return 1;
    }

    int soma = 0;

    for (int j = 0; j < N; j++) {
        if (!jaContabilizado(matriz[linhaEscolhida][j], valoresUnicos, contadorUnicos)) {
            valoresUnicos[contadorUnicos++] = matriz[linhaEscolhida][j];
            soma += matriz[linhaEscolhida][j];
        }
    }

    for (int i = 0; i < M; i++) {
        if (i != linhaEscolhida && !jaContabilizado(matriz[i][colunaEscolhida], valoresUnicos, contadorUnicos)) {
            valoresUnicos[contadorUnicos++] = matriz[i][colunaEscolhida];
            soma += matriz[i][colunaEscolhida];
        }
    }

    printf("A soma dos elementos únicos da linha %d e coluna %d é: %d\n", linhaEscolhida, colunaEscolhida, soma);

    return 0;
}
