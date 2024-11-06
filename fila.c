#include <stdio.h>

int main()
{

    int N,cont = 0;
    scanf("%d",&N);

    int vet[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&vet[i]);
        if (vet[i] >= 65)
        {
            cont++;
        }
    }
    printf("%d\n",cont);

return 0;
}
