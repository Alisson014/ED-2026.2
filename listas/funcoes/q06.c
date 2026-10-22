/**6) Crie uma função somarVetor que receba um ponteiro para o
primeiro elemento de um vetor de inteiros e o tamanho do vetor.
Utilizando apenas aritmética de ponteiros (sem usar o operador []),
a função deve calcular e retornar a soma de todos os elementos
do vetor. */

#include <stdio.h>

int somarVetor(int *vPtr, int len){
    int soma = 0;

    for (int i=0; i < len; i++){
        soma += *(vPtr+i);
    }

    return soma;
}

int main(void){
    int inteiros[6] = {1, 2, 3, 4, 5, 6};

    printf("Soma: %d", somarVetor(inteiros, 6));

    return 0;
}