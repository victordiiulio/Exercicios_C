#include <stdio.h>

void sequenciaFibo(int val);

int main(void){
    int n;

    printf("Digite o numero de termos desejado: ");
    scanf("%d", &n);
    printf("\n");

    sequenciaFibo(n);

    return 0;
}

void sequenciaFibo(int val){
    int termo_anterior0 = 0, termo_anterior1 = 1, termo_atual = 1, i = 0;

    while(i < val){
        printf("%d ", termo_atual);
        termo_atual = termo_anterior0 + termo_anterior1;
        termo_anterior0 = termo_anterior1;
        termo_anterior1 = termo_atual;

        i++;
    }
    printf("\n");
}