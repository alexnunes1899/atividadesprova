#include <stdio.h>
#include <string.h>

// Função para calcular o primeiro dígito verificador (b1)
int calcular_b1(char cpf[]) {
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (i + 1);
    }
    int b1 = soma % 11;
    return (b1 == 10) ? 0 : b1;
}

// Função para calcular o segundo dígito verificador (b2)
int calcular_b2(char cpf[]) {
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (9 - i);
    }
    int b2 = soma % 11;
    return (b2 == 10) ? 0 : b2;
}

// Função principal para verificar a validade do CPF
int main() {
    char cpf[15];

    while (scanf("%s", cpf) != EOF) {
        // Verifica se o formato do CPF está correto
        if (strlen(cpf) != 14 || cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-') {
            printf("CPF invalido\n");
            continue;
        }

        // Remove os separadores '.' e '-' e armazena os dígitos em um array
        char numeros[11];
        numeros[0] = cpf[0]; numeros[1] = cpf[1]; numeros[2] = cpf[2];
        numeros[3] = cpf[4]; numeros[4] = cpf[5]; numeros[5] = cpf[6];
        numeros[6] = cpf[8]; numeros[7] = cpf[9]; numeros[8] = cpf[10];
        numeros[9] = cpf[12]; numeros[10] = cpf[13];

        // Calcula os dígitos verificadores
        int b1 = calcular_b1(numeros);
        int b2 = calcular_b2(numeros);

        // Verifica se o CPF é válido comparando b1 e b2 com os dígitos finais
        if (b1 == (numeros[9] - '0') && b2 == (numeros[10] - '0')) {
            printf("CPF valido\n");
        } else {
            printf("CPF invalido\n");
        }
    }

    return 0;
}
