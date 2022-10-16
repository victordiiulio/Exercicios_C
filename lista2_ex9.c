#include <stdio.h>

/* fiz uma funcao de calcular potencia porque a pow() da biblioteca math.h
estava dando um resultado diferente para o ultimo digito e eu nao sabia como 
reverter
*/

int potencia(int x, int y);
unsigned int INVERTE(unsigned int num);

int main(void){
    int val, result;

    printf("Digite o valor a ser invertido: ");
    scanf("%d", &val);
    result = INVERTE(val);

    printf("%d\n", result);

    return 0;
}

int potencia(int x, int y){
    int i, total = 1;
    
    for(i = 0; i < y; i++){
        total *= x;
    }

    return total;
}

unsigned int INVERTE(unsigned int num){
    int invertido = 0, cont = 0, ultimo_dig, num1;
    
    num1 = num;

    /* nesse loop eu retiro o ultimo digito do valor
    e incremento meu contador a cada iteracao
    */

    for(num1; num1 > 0; num1 /= 10){
        cont++;                     
    }

    /*agora sabendo quantos digitos o numero possui, fiz um loop que
    percorre desde a quantidade de digitos ate 0. A cada iteracao eu
    somo o ultimo digito na parcela que ele deve ocupar no numero
    invertido
    */ 
    
    for(cont; cont > -1; cont--){
        ultimo_dig = num % 10;             
        invertido += potencia(10,cont-1) * ultimo_dig;       
        num /= 10;
    }

    return invertido;
}