#include <stdio.h>
#include <math.h>

int main(void){
    int a,b;
    float result;

    printf("Digite a base e a potencia: ");
    scanf("%d %d", &a, &b);

    result = pow(a,b);

    printf("%.0f\n", result);

    return 0;
}