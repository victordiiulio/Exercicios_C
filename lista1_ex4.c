#include <stdio.h>

void calculaMedia(float a, float b, float c);

int main(void){
    int erro = 0;
    float p1, p2, p3;
        
    do{
        printf("Digite as notas separadas por espaco: ");
        scanf("%f %f %f", &p1, &p2, &p3);
        printf("\n");
        if (p1 < 0 || p1 > 10 || p2 < 0 || p2 > 10 || p3 < 0 || p3 > 10){
            erro = 1;
            fflush(stdin);
            printf("Nota invalida\n\n");
        }else{
            erro = 0;
        }
    }while(erro);
    
    calculaMedia(p1,p2,p3);
    
    return 0;
}

void calculaMedia(float a, float b, float c){
    float result;
    result = (a+b+c)/3;
    printf("Media: %.2f\n", result);
    if (result >=6 ){
        printf("Aprovado");
    }else{
        if (result >=4){
            printf("Reprovado, com direito a VS");
        }else{
            printf("Reprovado");
        }
    }
    printf("\n");
}