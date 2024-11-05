#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i,fatorial=1;

    printf("Digite um numero de 1 a 15:");
    scanf("%d",&x);

    for (i = 1; i < x+1; i++)
    {
        fatorial = fatorial * i;
    }
    printf("Fatorial= %d",fatorial);

    return 0;
}
