#include <stdio.h>

void verificaPrimo(int num);

int main(void){
    int val;

    printf("Digite o valor a ser verificado: ");
    scanf("%d", &val);
    printf("\n");
    verificaPrimo(val);

    return 0;
}

void verificaPrimo(int num){
    int i, primo = 1;

    if(num <= 1){
        primo = 0;
    }else{
        for (i = 2; i < num; i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }
    }
    if(primo){
        printf("NUMERO PRIMO");
    }else{
        printf("NUMERO NAO PRIMO");
    }
    printf("\n");
}