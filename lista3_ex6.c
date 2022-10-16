#include <stdio.h>

int maiores(int n, int *vet, int x);

int main(void){
    int vet[4] = {3, 81, 7, 12}, max;
    
    max = maiores(4, vet, 9);
    printf("Existem %d valores maiores no vetor\n", max);
    
    return 0;
}

int maiores(int n, int *vet, int x){
    int cont = 0, i;

    for(i = 0; i < n; i++){
        if(vet[i] > x){
            cont++;
        }
    }

    return cont;
}