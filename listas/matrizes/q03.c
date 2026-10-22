/**3) Faça um programa receba uma matriz de tamanho N x N e calcule
a média de todos elementos da matriz. */

#include <stdio.h>

#define N 3

int get_med(int *vPtr, int len){
    int soma = 0;
    for (int i=0; i<len; i++){
        soma += *(vPtr+i);
    }

    return soma/len;
}

// Função para printar a matriz com ponteiros;
// É necessário que o ponteiro passado seja refentes à linha 0;
// ex: printMatriz(matriz[0], N);
void printMatriz(int *mPtr, int n){
    for (int i=0; i<n; i++){
        for (int j=i*n; j<(i+1)*(n); j++){
            printf("%d ", *(mPtr+j));
        }
        printf("\n");
    }
}

int main(void){

    int matriz[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    puts("Matriz: ");
    printMatriz(matriz[0], N);

    printf("Media: %d", get_med(matriz[0], N*N));

    return 0;
}