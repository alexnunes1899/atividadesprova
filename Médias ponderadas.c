#include <stdio.h>

int main()
{
    int i,N;
    double media,a,b,c;

    scanf("%d",&N);

    for (i = 0; i < N; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        media = (a*2 + b*3 + c*5)/10;
        printf("%.1lf\n",media);
    }
    return 0;
}
