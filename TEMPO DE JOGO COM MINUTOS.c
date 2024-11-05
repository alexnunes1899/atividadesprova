#include <stdio.h>

int main()
{

    int hi,mi,hf,mf;
    int totali,totalf,duracaohoras,duracaominutos,duracaototal;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    totali = hi * 60 + mi;
    totalf = hf * 60 + mf;

    if (totalf <= totali)
    {
        totalf += 24*60;
    }

    duracaototal = totalf - totali;
    duracaohoras = duracaototal/60;
    duracaominutos = duracaototal % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracaohoras, duracaominutos);

    return 0;
}
