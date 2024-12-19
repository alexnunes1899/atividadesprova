#include <stdio.h>
#include <string.h>
#include <locale.h>


#define N 100

int main()
{
    setlocale(LC_ALL,"");

    char s[N];
    int i;

    printf("Digite um texto: ");
    gets(s);
    i = strlen(s);

    printf("tamanho do texto: %d\n",i);

    printf("impressão de posição a posição: \n");
    for(int i = 0; i<strlen(s);i++){
        printf("%c",s[i]);
    }


    return 0;
}
