#include <stdio.h>

int Maior(int a, int b);
int Menor(int a, int b);
    
int main(void){
    int a, b, c, maior, menor;
    float media;
    
    printf("Digite os valores divididos por espaco: ");
    scanf("%d %d %d", &a, &b, &c);
    
    maior = Maior((Maior(a,b)),c);
    menor = Menor((Menor(a,b)),c);
    media = (float)(a + b + c)/3;

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Pares: ");

    if (a % 2 == 0){
        printf("%d ", a);
    }
    
    if (b % 2 == 0){
        printf("%d ", b);
    }
    if (c % 2 == 0){
        printf("%d ", c);
    }
    printf("\n");
    printf("Media: %f", media);
    
    return 0;
}

int Maior(int a, int b){
    if (a > b){
        return a;
    }else{
        return b;
    }
}

int Menor(int a, int b){
    if (a < b){
        return a;
    }else{
        return b;
    }
}