#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Lê o número de "Ho" que devem ser falados

    for (int i = 1; i < N; i++) {
        printf("Ho "); // Imprime "Ho" seguido de espaço até o penúltimo
    }
    printf("Ho!\n"); // Imprime "Ho!" sem espaço ao final

    return 0;
}
