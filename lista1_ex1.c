#include <stdio.h>

int main(void){
    int val, sec, min, hor;
    printf("Digite o valor em segundos: ");
    scanf("%d", &val);
    hor = val / 3600;
    min = (val % 3600) / 60;
    sec = (val % 3600) % 60;
    printf("%dh %dm %ds", hor, min, sec);
    return 0;
}