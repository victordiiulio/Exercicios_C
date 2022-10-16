#include <stdio.h>

typedef struct pessoa{
    int idade;
    float altura;
    char sexo;
}Pessoa;

int numMulheres(int n, Pessoa *v);
int numHomens(int n, Pessoa *v);
float varianciaAltura(int n, Pessoa *v, float m);
float media(int n, Pessoa *v);

int main(void){
    int cont_h, cont_m;
    float media_pessoas, variancia_pessoas;
    Pessoa vet_pessoas[] = {{78, 1.65, 'F'}, {24,1.55,'F'}, {23, 1.74, 'M'}, {18, 1.6, 'M'}};

    cont_h = numHomens(4, vet_pessoas);
    cont_m = numMulheres(4, vet_pessoas);
    media_pessoas =  media(4, vet_pessoas);
    variancia_pessoas = varianciaAltura(4, vet_pessoas, media_pessoas);


    printf("O numero de mulheres nessa faixa de idade sera': %d\n", cont_m);
    printf("O numero de homens nessa faixa de altura sera': %d\n", cont_m);
    printf("A variancia da altura sera': %f\n", variancia_pessoas);

    return 0;
}

float media(int n, Pessoa *v){
    int i;
    float s = 0.0;
    for (i = 0; i < n; i++)
        s = s + v[i].altura;
    
    return s/n;
}

float varianciaAltura(int n, Pessoa *v, float m){
    int i;
    float s = 0.0;
    for (i = 0; i < n; i++){    
        s += (v[i].altura - m) * (v[i].altura - m);
    }

    return s/n;
}

int numMulheres(int n, Pessoa *v){
    int cont = 0, i;

    for(i = 0; i < n; i++){
        if(v[i].sexo == 'F' && (v[i].idade >= 20 || v[i].idade <= 35)){
            cont ++;
            }
        }
    
    return cont;
    }

int numHomens(int n, Pessoa *v){
    int cont = 0, i;

    for(i = 0; i < n; i++){
        printf("v[i].altura = %f\n", v[i].altura);
        printf("%d\n", cont);
        if(v[i].sexo == 'M' && v[i].altura > 1.8){
            cont++;
        }
    }

    return cont;
}
