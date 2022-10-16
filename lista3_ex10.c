#include <stdio.h>

float media(int n, float *v);

int main(void){
    float media_vetor, vet[] = {4, 5, 8, 12};

    media_vetor = media(4, vet);

    printf("A media do vetor e' %f", media_vetor);

    return 0;
}

float media(int n, float *v){
    int i;
    float soma = 0, media_final;

    for(i = 0; i < n; i++){
        soma += v[i];
    }

    media_final = soma / n;

    return media_final;
}