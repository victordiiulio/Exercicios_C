#include <stdio.h>
#include <math.h>

int main(void){
    float x0, x1, x = 2.7;

    //arredondando x para baixo e armazenando em x0
    x0 = floor(x);
    printf("X arredondado para baixo sera %f\n", x0);

    // arredondando x para cima e armazenando em x1
    x1 = ceil(x);
    printf("X arredondado para cima sera %f\n", x1);
    
    return 0;
}