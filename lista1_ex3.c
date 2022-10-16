#include <stdio.h>

int main(void){
    int a, b;
    char sinal;
    printf("Digite dois valores separados pelo simbolo de operacao (x + y): ");
    scanf("%d %c %d", &a, &sinal, &b);

    if (sinal == '+'){
        printf("%d", a + b);
    }

    if (sinal == '-'){
        printf("%d", a - b);
    }

    if (sinal == '*'){
        printf("%d", a * b);
    }

    if (sinal == '/'){
        if(b == 0){
            printf("Nao e possivel dividir por 0");
        }else{
        printf("%f", (float) a / b);
        }
    }

}