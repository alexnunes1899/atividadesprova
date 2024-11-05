#include <stdio.h>


int main(){

    int x,ano,dias,meses;

    scanf("%d",&x);
    ano = x / 365;
    x = x % 365;
    meses = x / 30;
    dias = x % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,meses,dias);

    return 0;
}
