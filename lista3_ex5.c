#include <stdio.h>

float max_vet (int n, float *vet);

int main(void){
    float vet[4] = {3.2, 81.43, 7.864 ,9.312}, max;
    
    max = max_vet(4, vet);
    printf("O maior valor e' %f", max);
    
    return 0;
}

float max_vet (int n, float *vet){
    float maior = 0;
    int i;

    for(i = 0; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    return maior;
}