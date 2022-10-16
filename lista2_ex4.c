#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparaLetra(char a, char b);

int main(void){

    char letra, sorteado;
    int loop;

    srand(time(NULL));
    sorteado = (rand() % ('z' - 'a' + 1)) + 'a';

    /* ao fazer 'z' - 'a' + 1, o resultado
    sera o numero de caracteres entre estes
    extremos (26). O resto da divisao inteira
    de um numero aleatorio por 26, sera um valor
    entre 0 e 25. Ao somar este ultimo valor com
    'a' (97), estarei gerando um valor entre
    97 e 122, que sao codigos da tabela ASCII
    para letras de 'a' ate 'z' minusculas
    */

    do{
        printf("Digite uma letra minuscula: ");
        scanf("%c", &letra);
        printf("\n");
        fflush(stdin);
        loop = comparaLetra(sorteado,letra);
    }while(!loop);

    return 0;
}

int comparaLetra(char a, char b){
    int result;
    if(a == b){
        printf("Parabens, voce acertou!\n");
        result = 1;
    }else{
        if(a > b){
            printf("A letra sorteada e' maior que essa, tente novamente\n\n");
        }else{
            printf("A letra sorteada e' menor que essa, tente novamente\n\n");
        }
        result = 0;
    }

    return result;
}
