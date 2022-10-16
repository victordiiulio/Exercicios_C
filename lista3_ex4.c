#include <stdio.h>

int divs(int n, int *max, int *min);

int main(void){
    int num, maximo, minimo, result;

    printf("Digite o numero a ser testado: ");
    scanf("%d", &num);

    result = divs(num, &maximo, &minimo);

    if(result){
        printf("O numero %d nao e' primo\n", num);
        printf("Menor divisor: %d\n", minimo);
        printf("Maior divisor: %d\n", maximo);
    }else{
        printf("O numero %d e' primo\n", num);
    }

    return 0;
}

int divs(int n, int *max, int *min){
    int i, primo = 0, val_max, val_min;

    for(i = 2; i < n; i++){
        if(n % i == 0 && primo == 0){
            val_min = i;
            primo = 1;
            }
        }
    
    val_max = n / val_min;

    *max = val_max;
    *min = val_min;

    return primo;
}