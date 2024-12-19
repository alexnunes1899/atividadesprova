#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define MAX 100  // Limite m�ximo de linhas e colunas

// Fun��o para verificar se um n�mero j� foi contabilizado
bool jaContabilizado(int numero, int *array, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == numero) {
            return true;
        }
    }
    return false;
}

int main() {
    setlocale(LC_ALL, ""); // Permite exibir acentos da l�ngua portuguesa

    int M, N;
    int matriz[MAX][MAX];
    int linhaEscolhida, colunaEscolhida;
    int valoresUnicos[MAX * 2]; // Armazena valores �nicos
    int contadorUnicos = 0;

    printf("Digite o n�mero de linhas (M): ");
    scanf("%d", &M);

    printf("Digite o n�mero de colunas (N): ");
    scanf("%d", &N);

    // Entrada da matriz
    printf("Digite os elementos da matriz (%d x %d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Escolha da linha e coluna
    printf("Digite o �ndice da linha para somar (0 a %d): ", M - 1);
    scanf("%d", &linhaEscolhida);

    printf("Digite o �ndice da coluna para somar (0 a %d): ", N - 1);
    scanf("%d", &colunaEscolhida);

    // Valida��o dos �ndices
    if (linhaEscolhida < 0 || linhaEscolhida >= M || colunaEscolhida < 0 || colunaEscolhida >= N) {
        printf("�ndices de linha ou coluna inv�lidos!\n");
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
        if (i != linhaEscolhida && // Evita repetir o elemento que est� na interse��o
            !jaContabilizado(matriz[i][colunaEscolhida], valoresUnicos, contadorUnicos)) {
            valoresUnicos[contadorUnicos++] = matriz[i][colunaEscolhida];
            soma += matriz[i][colunaEscolhida];
        }
    }

    printf("A soma dos elementos �nicos da linha %d e coluna %d �: %d\n", linhaEscolhida, colunaEscolhida, soma);

    return 0;
}
