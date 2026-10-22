/**5) Escreva uma função que receba um vetor de inteiros, seu
tamanho, e dois ponteiros para inteiro: *min e *max. A função não
deve ter retorno (void). Em vez disso, ela deve encontrar o menor
e o maior valor no vetor e armazená-los nas variáveis para as
quais min e max apontam. Na main, declare um vetor e duas
variáveis, menor e maior, e passe seus endereços para a função.
Depois, imprima os valores de menor e maior. */

#include <stdio.h>

void min_max(int vetor[], int len, int *min, int *max){
    *min = vetor[0];
    *max = vetor[0];

    for (int i=0; i < len; i++){
        if (*min > vetor[i]){
            *min = vetor[i];
            continue;
        }

        if (*max < vetor[i]){
            *max = vetor[i];
        }
    }
}


int main(void) {

    int inteiros[10] = {1, 2, 3, 40, 5, 6, -7, 8, 9, 10};
    int min, max;

    min_max( inteiros, 10,&min, &max);

    printf("Min (%d) - Max (%d)\n", min, max);

    return 0;
}