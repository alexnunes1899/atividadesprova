#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int ano1, mes1, dia1, ano2, mes2, dia2;

        // Lê as duas datas no formato AAAA-MM-DD
        scanf("%d-%d-%d %d-%d-%d", &ano1, &mes1, &dia1, &ano2, &mes2, &dia2);

        // Configura a primeira data
        struct tm data1 = {0};
        data1.tm_year = ano1 - 1900;  // Ano desde 1900
        data1.tm_mon = mes1 - 1;      // Mês de 0 a 11
        data1.tm_mday = dia1;

        // Configura a segunda data
        struct tm data2 = {0};
        data2.tm_year = ano2 - 1900;  // Ano desde 1900
        data2.tm_mon = mes2 - 1;      // Mês de 0 a 11
        data2.tm_mday = dia2;

        // Converte as datas para time_t
        time_t tempo1 = mktime(&data1);
        time_t tempo2 = mktime(&data2);

        // Calcula a diferença absoluta em dias
        int diferenca = abs((int)difftime(tempo1, tempo2) / (24 * 3600));

        // Imprime o resultado
        printf("%d\n", diferenca);
    }

    return 0;
}
