/**1) Faça um programa receba uma matriz de tamanho N x N e realize
uma multiplicação dessa matriz por um escalar dado pelo usuário. */

#include <stdio.h>

#define N 3

void multiEscalar(int *vPtr, int len, int esc){
    for (int i=0; i < len; i++){
        *(vPtr+i) *= esc;
    }
}

int main(void){

    int matriz[N][N] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int escalar;

    printf("Digite o escalar: ");
    scanf("%d", &escalar);

    // multiEscalar(matriz[0], N*N, escalar);

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            matriz[i][j] *= escalar;
        }
    }

    for(int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}