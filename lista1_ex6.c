#include <stdio.h>
#include <math.h>

int main(void){
    int a,b,c, erro = 0;
    float raiz0, raiz1, delta;
    
    do{
        printf("Digite os coeficientes da equacao separados por espaco: ");
        scanf("%d %d %d", &a, &b, &c);
        printf("\n");

        if(a == 0){
            erro = 1;
            printf("O coeficiente 'a' nao pode ser igual a 0\n\n");
            fflush(stdin);
        }else{
            erro = 0;
        }
    }while(erro);

    delta = (pow(b,2)) -4 * a * c;

    if(delta < 0){
        printf("Sem raizes reais\n");
    }else{
        raiz0 = (-b + sqrt(delta))/(2*a);
        raiz1 = (-b - sqrt(delta))/(2*a);

        printf("X0 = %.2f\n", raiz0);
        printf("X1 = %.2f\n", raiz1);
    }

    return 0;
}