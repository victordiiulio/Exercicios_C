#include <stdio.h>

int total_de_notas(int valor);

int main(void){
    int val, result;
    
    printf("Digite o valor em reais: ");
    scanf("%d", &val);
    
    result = total_de_notas(val);

    printf("\n");
    printf("O menor numero de notas sera %d cedulas\n", result);

    return 0;
}

int total_de_notas(int valor){
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1, total;

    notas100 = valor / 100;
    notas50 = (valor % 100) / 50;
    notas20 = ((valor % 100) % 50 ) / 20;
    notas10 = (((valor % 100) % 50 ) % 20) / 10;
    notas5 = ((((valor % 100) % 50 ) % 20) % 10) / 5;
    notas2 = (((((valor % 100) % 50 ) % 20) % 10) % 5) / 2;
    notas1 = (((((valor % 100) % 50 ) % 20) % 10) % 5) % 2;
    total = notas100 + notas50 + notas20 + notas10 + notas5 + notas2 + notas1;

    return total;
}