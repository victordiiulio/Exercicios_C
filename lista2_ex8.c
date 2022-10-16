#include <stdio.h>

void verificaCaracteristica(void);

int main(void){
    printf("Os numeros com a caracteristica do exemplo sao: ");
    verificaCaracteristica();

    return 0;
}

void verificaCaracteristica(void){
    int inicio = 1000, fim = 9999;
    int prim_digitos, ult_digitos, soma, result;

    for(inicio; inicio <= fim; inicio++){
        prim_digitos = inicio / 100;
        ult_digitos = inicio % 100;
        soma = prim_digitos + ult_digitos;
        result = soma * soma;

        if(result == inicio){
            printf("%d ", inicio);
        }
    }
    printf("\n");
}