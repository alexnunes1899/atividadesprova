#include <stdio.h>

int main()
{
    double N;
    int valor, centavos;
    int cem, cinquenta, vinte, dez, cinco, dois;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moedacentavo;


    scanf("%lf", &N);

    valor = (int) N;
    centavos = (int)((N - valor) * 100 + 0.5);
    cem = valor / 100;
    valor = valor % 100;
    cinquenta = valor / 50;
    valor = valor % 50;
    vinte = valor / 20;
    valor = valor % 20;
    dez = valor / 10;
    valor = valor % 10;
    cinco = valor / 5;
    valor = valor % 5;
    dois = valor / 2;
    valor = valor % 2;

    moeda1 = valor;
    moeda50 = centavos / 50;
    centavos = centavos % 50;
    moeda25 = centavos / 25;
    centavos = centavos % 25;
    moeda10 = centavos / 10;
    centavos = centavos % 10;
    moeda5 = centavos / 5;
    centavos = centavos % 5;
    moedacentavo = centavos;


    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);


    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moedacentavo);

    return 0;
}
