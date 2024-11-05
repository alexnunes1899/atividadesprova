#include <stdio.h>

int main() {
    int K;

    while (1) {
        scanf("%d", &K);
        if (K == 0) break;

        int N, M;
        scanf("%d %d", &N, &M);

        for (int i = 0; i < K; i++) {
            int X, Y;
            scanf("%d %d", &X, &Y);

            if (X == N || Y == M) {
                printf("divisa\n");
            }
            else if (X < N && Y > M) {
                printf("NO\n");
            }
            else if (X > N && Y > M) {
                printf("NE\n");
            }
            else if (X > N && Y < M) {
                printf("SE\n");
            }
            else if (X < N && Y < M) {
                printf("SO\n");
            }
        }
    }

    return 0;
}