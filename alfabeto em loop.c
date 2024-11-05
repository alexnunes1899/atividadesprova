#include <stdio.h>

int main(){
    char letras [26];
    int cont = 0;
    //Gerando um alfabeto
    for (int i = 97; i <=122; i++){
        letras[cont]=i;
        cont = cont + 1;
    }
    for (int i = 0; i< 26;i++){
        printf("%d -> %c\n", letras[i], letras[i]);
    }


    return 0;
}
