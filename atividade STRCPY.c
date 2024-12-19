#include <stdio.h>
#include <string.h>
#include <locale.h>


#define N 100

int main()
{

    setlocale(LC_ALL,"");

    char origem[N] = {"Olá mundo"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino,origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

    char s1[N] = {"Lógica de "};
    char s2[N] = {"Programação!"};

    printf("Antes do STRCAT: \n");
    printf("str1: %s\n",s1);
    printf("str2: %s\n",s2);

    strcat(s1,s2);//Pego s2 e passo para s1

    printf("Depois do STRCAT: \n");
    printf("%s",s1);

    return 0;
}
