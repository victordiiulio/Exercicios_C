#include <stdio.h>

int main(void){
    // para c = 4.6, todos devem ser floats
    float a0, b0 ,c0;
    a0 = 3;
    b0 = a0 / 2;
    c0 = b0 + 3.1;
    printf("c = %.1f\n\n",c0);
    
    //para c = 4.1, a e b devem ser ints e c deve ser float
    int a1, b1;
    float c1;
    a1 = 3;
    b1 = a1 / 2;
    c1 = b1 + 3.1;
    printf("c = %.1f\n\n",c1);

    //para c = 4, todos devem ser ints
    int a2, b2 ,c2;
    a2 = 3;
    b2 = a2 / 2;
    c2 = b2 + 3.1;
    printf("c = %d\n\n",c2);

    return 0;
}