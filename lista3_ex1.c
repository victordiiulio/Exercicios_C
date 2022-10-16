#include <stdio.h>

void calc_circulo(float r, float *circunferencia, float *area);

int main(void){
    float raio, circ, area;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    calc_circulo(raio, &circ, &area);

    printf("Area: %f\n", area);
    printf("Circunferencia: %f\n", circ);

    return 0;
}

void calc_circulo(float r, float *circunferencia, float *area){
    float PI = 3.14159265;
    *area = PI * r * r;
    *circunferencia = 2 * PI * r;
}