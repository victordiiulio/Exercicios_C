#include <stdio.h>

float calculaSalario(int hor, float val);

int main(void){
    int horas;
    float valor, result;

    printf("Digite a quantidade de horas e a remuneracao por hora: ");
    scanf("%d %f", &horas, &valor);

    result = calculaSalario(horas,valor);
    printf("Salario: R$ %.2f\n", result);

    return 0;
}

float calculaSalario(int hor, float val){
    float base, bonus50 = 0, bonus100 = 0, total, BASE_MAX, BONUS50_MAX;

    BASE_MAX = 40 * val;
    BONUS50_MAX = 20 * val * 1.5;

    if(hor > 40){
        base = BASE_MAX;
        if(hor > 60){
            bonus50 = BONUS50_MAX;
            bonus100 = (hor - 60) * val * 2;
        }else{
            bonus50 = (hor - 40) * val * 1.5;
        }
    }else{
        base = hor * val;
    }

    total = base + bonus50 + bonus100;

    return total;
}