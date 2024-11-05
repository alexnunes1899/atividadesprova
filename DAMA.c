#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;

    while (1) {
        // Lê os valores de entrada
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        // Condição de parada
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) {
            break;
        }

        // Caso a posição inicial seja igual à posição final
        if (x1 == x2 && y1 == y2) {
            printf("0\n");
        }
        // Caso estejam na mesma linha, coluna ou diagonal
        else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) {
            printf("1\n");
        }
        // Caso contrário, a dama pode alcançar em 2 movimentos
        else {
            printf("2\n");
        }
    }

    return 0;
}
