/**8) Uma matriz é dita estritamente diagonal dominante se cada
elemento da diagonal principal é maior do que o somatório dos
demais termos da linha. Faça um programa receba uma matriz de
tamanho N x N, imprima se a matriz é ou não estritamente
diagonal dominante.
 */

#include <stdio.h>

#define N 3

void printMatriz(int *mPtr, int n){
    for (int i=0; i<n; i++){
        for (int j=i*n; j<(i+1)*(n); j++){
            printf("%d ", *(mPtr+j));
        }
        printf("\n");
    }
}

int somaLinha(int *linhaPtr, int len){
    int soma = 0;
    for (int i=0; i<len; i++){
        soma += *(linhaPtr+i);
    }

    return soma;
}

int detDominante(int matriz[][N]){
    for (int i=0; i<N; i++){
        if (matriz[i][i] <= somaLinha(matriz[i], N) - matriz[i][i]){
            return 0;
        }
    }

    return 1;
}

int main(void){
    int matriz[N][N] = {
        {6,2,3},
        {4,11,6},
        {7,8,16}
    };

    printf("A matriz: \n");
    printMatriz(matriz[0], N);

    if (detDominante(matriz)){
        printf("Eh estritamente diagonal dominante");
    } else {
        printf("Nao eh estritamente diagonal dominante");
    }
    
    return 0;
}