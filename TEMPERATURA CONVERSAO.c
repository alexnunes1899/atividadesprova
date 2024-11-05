#include <stdio.h>
#include <string.h>


int main()
{

    char graus;
    double f,c;

    printf("Escolha F OU C para converter para Fahrenheit ou Celsius:");
    scanf("%c",&graus);

    if (graus == 'F' || graus == 'f')
    {
        printf("Digite a temperatura em Fahrenheit:");
        scanf("%lf",&f);
        c = (5.0/9)*(f-32);
        printf("Valor convertido em Celsius: %.2lf º",c);

    }
    if(graus == 'C' || graus == 'c')
    {
        printf("Digite a temperatura Celsius:");
        scanf("%lf",&c);
        f= 9.0 * c / 5.0+ 32.0;
        printf("Valor convertido em Fahrenheit: %.2lf º",f);
    }
    return 0;
}
