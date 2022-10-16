#include <stdio.h>

void contaInteiros(int menor, int maior);

int main(void){
    int x,z, erro;

    do{
        printf("Digite dois valores, sendo o primeiro menor que o segundo: ");
        scanf("%d %d", &x, &z);
        printf("\n");

        if(x > z){
            printf("O primeiro valor informado e' maior que o segundo\n\n");
            erro = 1;
        }else{
            erro = 0;
        }
    }while(erro);

    contaInteiros(x,z);

    return 0;
}

void contaInteiros(int menor, int maior){
    int total, inicio, cont = 1, i;

    inicio = menor; // salvei o valor da menor variável para usar no for
    total = menor;

    while(total <= maior){
        menor ++;
        total += menor;
        cont ++;
    }

    printf("%d (", cont);

    for(i = 0; i < cont; i++){
        if(i != cont - 1){
            printf("%d + ", inicio);
        }else{
            printf("%d = %d)", inicio, total);
        }
        inicio++;
    }
    
    printf("\n");
}
