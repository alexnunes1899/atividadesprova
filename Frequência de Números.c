#include <stdio.h>

int main()
{

    int N,cont = 0;
    scanf("%d",&N);

    int num;
    int vetorcont[2001];
    for (int i = 0; i <= 2000; i++)
    {
        vetorcont[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&num);
        vetorcont[num]++;
    }

    for(int i = 0; i <= 2000; i ++)
    {
        if (vetorcont[i] > 0)
        {
            printf("%d aparece %d vez(es)\n",i,vetorcont[i]);
        }
    }
    return 0;
}
