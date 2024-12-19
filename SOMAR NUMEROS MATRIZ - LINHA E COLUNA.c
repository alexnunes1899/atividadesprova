#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define MAX 100  // Limite máximo de linhas e colunas

// Função para verificar se um número já foi contabilizado
bool jaContabilizado(int numero, int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == numero) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, ""); // Permite exibir acentos da língua portuguesa

    int M, N;
    int matriz[MAX][MAX];
    int linhaEscolhida, colunaEscolhida;
    int valoresUnicos[MAX * 2]; // Armazena valores únicos
    int contadorUnicos = 0;

    printf("Digite o número de linhas (M): ");
    scanf("%d", &M);

    printf("Digite o número de colunas (N): ");
    scanf("%d", &N);

    // Entrada da matriz
    printf("Digite os elementos da matriz (%d x %d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Escolha da linha e coluna
    printf("Digite o índice da linha para somar (0 a %d): ", M - 1);
    scanf("%d", &linhaEscolhida);

    printf("Digite o índice da coluna para somar (0 a %d): ", N - 1);
    scanf("%d", &colunaEscolhida);

    // Validação dos índices
    if (linhaEscolhida < 0 || linhaEscolhida >= M || colunaEscolhida < 0 || colunaEscolhida >= N) {
        printf("Índices de linha ou coluna inválidos!\n");
        return 1;
    }

    int soma = 0;

    // Soma os elementos da linha escolhida
    for (int j = 0; j < N; j++) {
        if (!jaContabilizado(matriz[linhaEscolhida][j], valoresUnicos, contadorUnicos)) {
            valoresUnicos[contadorUnicos++] = matriz[linhaEscolhida][j];
            soma += matriz[linhaEscolhida][j];
        }
    }

    // Soma os elementos da coluna escolhida
    for (int i = 0; i < M; i++) {
        if (i != linhaEscolhida && // Evita repetir o elemento que está na interseção
            !jaContabilizado(matriz[i][colunaEscolhida], valoresUnicos, contadorUnicos)) {
            valoresUnicos[contadorUnicos++] = matriz[i][colunaEscolhida];
            soma += matriz[i][colunaEscolhida];
        }
    }

    printf("A soma dos elementos únicos da linha %d e coluna %d é: %d\n", linhaEscolhida, colunaEscolhida, soma);

    return 0;
}
