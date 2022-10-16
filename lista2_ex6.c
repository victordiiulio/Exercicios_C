#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparaNum(int a, int b);

int main(void){

    int num, sorteado;
    int loop;

    srand(time(NULL));
    sorteado = rand() % 101;

    /* como no exercicio 4 desta lista, ao fazer
    rand() % n, o numero sorteado estara no intervalo
    fechado de 0 e n-1. Neste caso sera um numero entre
    0 e 100
    */

    do{
        printf("Digite um numero entre 0 e 100: ");
        scanf("%d", &num);
        printf("\n");
        fflush(stdin);
        loop = comparaNum(sorteado,num);
    }while(!loop);

    return 0;
}

int comparaNum(int a, int b){
    static int cont = 1;
    int result;
    
    if(a == b){
        printf("Parabens, voce acertou!\n");
        printf("Tentativas: %d\n", cont);
        result = 1;
    }else{
        if(a > b){
            printf("O numero sorteado e' maior que esse, tente novamente\n\n");
        }else{
            printf("O numero sorteado e' menor que esse, tente novamente\n\n");
        }
        result = 0;
        cont ++;
    }
    return result;
}
