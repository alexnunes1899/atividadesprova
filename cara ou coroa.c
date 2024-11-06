#include <stdio.h>


int main ()
{

    int N,M,J;
    scanf("%d",&N);

    int vet[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&vet[i]);
        if (vet[i] == 0)
        {
            M++;
        }
        else if (vet[i] == 1)
        {
            J++;
        }
    }
    printf("Maria %d Joao %d",M,J);


    return 0;
}
