#include <stdio.h>

#define N 8

int _10_elevado_a(int e){
    int res = 1;
    for (int i=0; i<e; i++){
        res *= 10;
    }

    return res;
}

int get_len(int num){
    int len=0;
    while (num > _10_elevado_a(len)){
        len++;
    }
    return len;
}

int get_magic_n(int *vetor, int len){
    int soma = 10, soma_aux;
    while (soma>=10){
        soma = 0;
        for(int i=0; i<len; i++){
            soma += vetor[i];
        }
        soma_aux = soma;
        len = get_len(soma);

        for (int i=0; i<len; i++){
            vetor[i] = soma_aux / _10_elevado_a(len-(i+1));
            soma_aux %= _10_elevado_a(len-(i+1));
        }
    }
    return soma;
}


int main(void){
    int niver1[N] = {1,9,0,1,1,9,8,1};
    int niver2[N] = {2,0,0,2,1,9,7,0};

    if (get_magic_n(niver1, N) == get_magic_n(niver2, N)){
        printf("Casal perfeito.\n");
    } else {
        printf("...\n");
    }
    return 0;
}