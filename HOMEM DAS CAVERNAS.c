#include <stdio.h>

int main() {
    int L, R;

    while (1) {
        // Lê os valores de L e R
        scanf("%d %d", &L, &R);

        // Verifica a condição de parada
        if (L == 0 && R == 0) {
            break;
        }

        // Imprime a soma de L e R
        printf("%d\n", L + R);
    }

    return 0;
}
