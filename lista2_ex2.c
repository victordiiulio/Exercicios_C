#include <stdio.h>

int somaImpar(int val);

int main(void){
    int n, result;

    printf("Digite a quantidade de numeros impares a serem somados: ");
    scanf("%d", &n);
    printf("\n");
    result = somaImpar(n);
    printf("A soma dos %d primeiros numeros impares sera %d\n", n, result);
    
    return 0;
}

int somaImpar(int val){
    int i = 1, cont = 0, soma = 0;

    while(cont < val){
        if(i % 2 != 0){
            cont++;
            soma += i;
        }
        i++;
    }

    return soma;
}