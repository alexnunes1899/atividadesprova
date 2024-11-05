#include <stdio.h>

int main()
{
    double salario, reajuste, total;
    int percentual;

    scanf("%lf", &salario);

    if (salario <= 400.00)
    {
        percentual = 15;
        reajuste = salario * percentual / 100.0;
        total = reajuste + salario;
    }
    else if (salario <= 800.00)
    {
        percentual = 12;
        reajuste = salario * percentual / 100.0;
        total = reajuste + salario;
    }
    else if (salario <= 1200.00)
    {
        percentual = 10;
        reajuste = salario * percentual / 100.0;
        total = reajuste + salario;
    }
    else if (salario <= 2000.00)
    {
        percentual = 7;
        reajuste = salario * percentual / 100.0;
        total = reajuste + salario;
    }
    else
    {
        percentual = 4;
        reajuste = salario * percentual / 100.0;
        total = reajuste + salario;
    }

    printf("Novo salario: %.2lf\n", total);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
