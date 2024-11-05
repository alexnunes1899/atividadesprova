#include <stdio.h>

int main()
{
    int T;


    long long int vet[T];
    long long int vet_fibo[61];
    long long int N;
    vet_fibo [0] = 0;
    vet_fibo [1] = 1;

    for (int i = 2; i <= 60; i++)
    {
        vet_fibo[i] = vet_fibo[i - 1] + vet_fibo[i - 2];

    }
    scanf("%d",&T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d",&N);
        printf("Fib(%lld) = %lld\n",N,vet_fibo[N]);
    }

    return 0;
}
