#include <stdio.h>

int main() {
    int L, R;

    while (1) {
        // L� os valores de L e R
        scanf("%d %d", &L, &R);

        // Verifica a condi��o de parada
        if (L == 0 && R == 0) {
            break;
        }

        // Imprime a soma de L e R
        printf("%d\n", L + R);
    }

    return 0;
}
