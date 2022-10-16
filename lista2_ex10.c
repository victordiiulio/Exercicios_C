#include <stdio.h>

int mdc (int x, int y);

int main(void){
    int num0, num1, result;

    printf("Digite os dois valores para o calculo do MDC: ");
    scanf("%d %d", &num0, &num1);
    
    result = mdc(num0,num1);
    
    printf("O MDC e': %d\n", result);

    return 0;
}

int mdc (int x, int y){
    int resto, dividendo, divisor;

    dividendo = x;
    divisor = y;
    resto = dividendo % divisor;  
    
    while(resto > 0){
        dividendo = divisor;
        divisor = resto;
        resto = dividendo % divisor;
    }

    return divisor;
}

    

