#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // L� o n�mero de "Ho" que devem ser falados

    for (int i = 1; i < N; i++) {
        printf("Ho "); // Imprime "Ho" seguido de espa�o at� o pen�ltimo
    }
    printf("Ho!\n"); // Imprime "Ho!" sem espa�o ao final

    return 0;
}
