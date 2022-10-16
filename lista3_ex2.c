#include <stdio.h>

int main(void){
    printf("a) = 1, pois a operacao e' verdadeira\n");
    printf("b) = -2, a operacao subtrai o conteudo dos ponteiros\n");
    printf("c) = *p, pois o indicador de conteudo (*) e o de endereco (&) do ponteiro se anulam\n");
    printf("d) = 6, *p/(*q) e' equivalente a 3/5. A multiplicacao possui precedencia sobre os demais, entao\n");
    printf("sera realizada a operacao 3 * (-3) = -9. Depois e' feita a divisao -9/5 = -1, pois ambos i e j sao ints\n");
    printf("e por fim -1 + 7 = 6\n");

    return 0;
}