#include <stdio.h>

int main(){
    //vetores inteiros
    int numeros[10];//0..9 é sempre n-1 se é 10 então fica 10-1 = 9.
    for (int i = 0; i <10; i++){
        printf("Digite um numero:");
        scanf("%d",&numeros[i]);
    }
        for (int i = 9; i >=0; i--){
        printf("%d\n",numeros[i]);
    }


    return 0;
}
