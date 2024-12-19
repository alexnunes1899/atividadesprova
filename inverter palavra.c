#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100], invertida[100];
    int i, j, tamanho;

    scanf("%s", palavra);

    tamanho = strlen(palavra);
    j = 0;


    for (i = tamanho - 1; i >= 0; i--) {
        invertida[j] = palavra[i];
        j++;
    }
    invertida[j] = '\0';
    printf("Resultado: %s\n", invertida);

    return 0;
}
